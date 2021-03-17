#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll r,ll g,ll b,ll w){
    if((r%2+g%2+b%2+w%2)>1){
        return false;
    }else return true;
}


void solve(){
    ll r,g,b,w;
    cin>>r>>g>>b>>w;
    if(check(r,g,b,w)){
        cout<<"Yes"<<endl;
    }else if(r>0 && g>0 && b>0 && check(r-1,g-1,b-1,w+1)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    

}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}