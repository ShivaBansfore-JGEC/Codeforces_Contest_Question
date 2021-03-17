#include<bits/stdc++.h>
#define ll long long 
using namespace std;



void solve(){

    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    
    for(int i=2;i<9;i++){
        while(x%i==0 && y%i==0){
            x=x/i;
            y=y/i;
        }
    }

    cout<<x<<" "<<y<<endl;


}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}