#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
 
void solve(){
    
    int n;
    cin>>n;
    if(n%3==0){
        cout<<1<<" "<<1<<" "<<n-2<<endl;
    }else{
        cout<<1<<" "<<2<<" "<<n-3<<endl;
    }
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}