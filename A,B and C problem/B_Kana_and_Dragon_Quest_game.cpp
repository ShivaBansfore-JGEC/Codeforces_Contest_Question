#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int x,n,m;
    cin>>x>>n>>m;
    while(x>0 && n && (x/2+10)<x){
        n--;
        x=x/2+10;
    }
    if(x<=(m*10)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}