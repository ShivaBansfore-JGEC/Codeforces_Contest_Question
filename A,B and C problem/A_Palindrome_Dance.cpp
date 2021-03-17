#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    int n,a,b;
    cin>>n>>a>>b;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];

    int i=0;
    int j=n-1;

    int ans=0;
        while(i<=j){
            if(ar[i]!=2 && ar[j]!=2 && ar[i]!=ar[j]){
                cout<<-1<<endl;
                return;
            }
            if(ar[i]==2 && ar[j]==2 && i!=j){
                ans+=2*min(a,b);
            }else if(ar[i]==2 && ar[j]==2){
                ans+=min(a,b);
            }else if(ar[i]==2){
                if(ar[j]==0){
                    ans+=a;
                }else ans+=b;
            }else if(ar[j]==2){
                if(ar[i]==0){
                    ans+=a;
                }else ans+=b;
            }

            i++;
            j--;

        }
        cout<<ans<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}