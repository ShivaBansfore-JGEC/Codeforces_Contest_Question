#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
void solve(){
 
    int n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
 
    vector<int> a;
    for(int i=0;i<n-1;i++){
        a.push_back(arr[i+1]-arr[i]);
    }
    sort(a.begin(),a.end());
    ll val=k-1;

    ll ans=0;
    for(int i=0;i<a.size()-val;i++){
        ans+=a[i];
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