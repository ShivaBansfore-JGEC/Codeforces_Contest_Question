#include<bits/stdc++.h>
using namespace std;


void solve(){
    int a,b,c,r;
    cin>>a>>b>>c>>r;
    //if station inside

    if(c<=min(a,b) and c<=max(a,b)){
        int ans=(c-min(a,b)-r)+(b-(c+r));
        cout<<ans<<endl;
    }

    //if station is outside 
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}