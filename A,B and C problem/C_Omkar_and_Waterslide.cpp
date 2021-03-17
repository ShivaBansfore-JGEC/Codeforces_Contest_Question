#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    ll ans=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            ans+=(arr[i]-arr[i+1]);
        }
    } 
    cout<<ans<<endl;
    
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}