#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    ll p,f,cns,cnw,s,w;
    cin>>p>>f;
    cin>>cns>>cnw;
    cin>>s>>w;

    if(s>w){
        swap(s,w);
        swap(cns,cnw);
    }
    int ans=0;
    for(int si=0;si*s<=p && si<=cns;si++){

        int w1=(p-si*s)/w;
        int s2=min(cns-si,f/s);
        int w2=min((f-s2*s)/w,cnw-w1);
        ans=max(ans,si+s2+w1+w2);
    }
    cout<<ans<<endl;

 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}