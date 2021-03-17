#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<pair<int,string>> v;
 
 
void solve(){
 
    ll l,r;
    cin>>l>>r;
    cout<<"YES"<<endl;
    for(ll i=l;i<=r;i+=2){
        cout<<i<<" "<<i+1<<endl;
    }
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}