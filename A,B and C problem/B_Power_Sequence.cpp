#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ll big=1000000000000000;
    ll ans=big;
    ll c=1;
    while(1){
        ll val=0,pw=1;
        for(int i=0;i<n;i++,pw*=c){
            if(pw>=(ll)big){
                val=-1;
                break;
            }
            val+=abs(pw-arr[i]);
        }

        if(val==-1){
            break;
        }
        c++;
        ans=min(val,ans);
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