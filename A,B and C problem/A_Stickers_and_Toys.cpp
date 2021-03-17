#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
void solve(){

    int n,s,t;
    cin>>n>>s>>t;
    cout<<n-min(s,t)+1<<endl;
 
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}