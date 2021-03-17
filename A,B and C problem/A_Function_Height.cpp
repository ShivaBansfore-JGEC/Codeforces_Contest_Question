#include<bits/stdc++.h>
#define ll long long 
using namespace std;



void solve(){
    
    ll n,k;
    cin>>n>>k;
    if(n>=k){
        cout<<1<<endl;
    }else{
        cout<<k/n<<endl;
    }


}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}