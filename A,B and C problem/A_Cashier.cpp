#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){

    ll n,L,a;
    cin>>n>>L>>a;
    ll prev=0;
    ll cnt=0;
    for(int i=0;i<n;i++){
        int t,l;
        cin>>t>>l;
        int val=t+l;
        cnt+=((t-prev)/a);
        prev=val;
    }

    //cout<<prev<<endl;
    //cout<<prev<<" "<<L<<endl;
    cnt+=(L-prev)/a;
    cout<<cnt<<endl;

}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}