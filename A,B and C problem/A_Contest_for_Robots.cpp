#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int pos=0;
    int a_sum=0;
    int b_sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)
            a_sum+=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==1)
            b_sum+=b[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]==1 && b[i]==0){
            pos++;
        }
    }
    
    if(a_sum==b_sum && pos==0){
        cout<<-1<<endl;
    }else{
        if(a_sum>b_sum){
            cout<<1<<endl;
        }else{
            if(pos==0){
                cout<<-1<<endl;
            }else{
            int i=1;
            int ans=-1;
                while((i*pos)+(a_sum-pos)<=b_sum){
                    i++;
                    ans=i;
                }
                cout<<ans<<endl;
            }

        }
    }

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    while(t--)  solve();
    return 0;
}