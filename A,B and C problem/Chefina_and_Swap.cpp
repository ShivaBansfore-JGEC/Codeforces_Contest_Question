#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){

    ll n;
    cin>>n;

    if(n<=2){
        cout<<0<<endl;
        return;
    }else{
        cout<<ceil((double)n/(double)2)<<endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}