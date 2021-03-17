#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    int n;
    cin>>n;
    map<ll,ll> mp;
    ll mx=INT_MIN;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        mp[x-i]+=x;
        mx=max(mx,mp[x-i]);
        
    }
    cout<<mx<<endl;

}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t=1;
    //cin>>t;
    while(t--) solve();

    return 0;
}