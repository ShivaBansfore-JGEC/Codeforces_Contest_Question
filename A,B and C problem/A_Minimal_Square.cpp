#include<bits/stdc++.h>
using namespace std;


void solve(){
  
    int a,b;
    cin>>a>>b;
    long long ans=min(max(2*b,a),max(2*a,b));
    cout<<ans*ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}