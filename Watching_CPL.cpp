#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;
    long long h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }

    sort(h,h+n,greater<int>());
    vector<bool> vis(n,false);
    long long sum1=0,sum2=0,ans=0;

    int mike=0,tracy=0;

    for(int i=0;i<n;i++){
        if(mike==0 && tracy==0){
            if(i%2==0){
                sum1+=h[i];
                ans++;
                if(sum1>=k){
                    mike=1;
                }
            }else{
                sum2+=h[i];
                ans++;
                if(sum2>=k){
                    tracy=1;
                }
            }
        }else if(mike==1 && tracy==1){
            break;
        }else{
            if(mike==0){
                if(sum1>=k){
                    mike=1;
                    break;
                }else{
                    sum1+=h[i];
                    ans++;
                }

            }else{
                if(sum2>=k){
                    tracy=1;
                    break;
                }else{

                sum2+=h[i];
                ans++;
                }
            }
        }
    }

    if(mike==1 && tracy==1){
        cout<<ans<<endl;
    }else{
        cout<<-1<<endl;
    }
    

}
int main(){
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}