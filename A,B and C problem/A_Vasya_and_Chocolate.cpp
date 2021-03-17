#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){

    ll s,a,b,c;
    cin>>s>>a>>b>>c;
    
    s/=c;
    ll x=s/a;
    s%=a;
    ll res=x*1LL*(a+b);
    res+=s;
    cout<<res<<endl;

}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}