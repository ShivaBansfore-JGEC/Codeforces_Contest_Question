#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
void solve(){
    ll a,b;
    cin>>a>>b;
    if(a>=b){
        cout<<"YES"<<endl;
        return;
    }else{
        ll val1=a;
        ll val2=a;
        while(val1<b){
            if(val1%2!=0){
                val1--;
            }
            val1=(3*val1)/2;
            if(val1==val2) break;
            val2=val1;
        }
        if(val1<b) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
 
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}