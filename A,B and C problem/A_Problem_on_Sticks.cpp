#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){

    int n;
    cin>>n;
    set<ll> s;
    ll mx=INT_MIN;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mx=max(mx,x);
        if(x>0){
            s.insert(x);
        }
    }

    if(mx==0){
        cout<<0<<endl;
        return;
    }
    cout<<s.size()<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}