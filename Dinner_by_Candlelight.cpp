#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,y,x;
    cin>>a>>y>>x;
    if(y<=a){
        long long ans=(long long) (y*x);
        cout<<ans<<endl;
        return;
    }

    if(a<y){
        long long ans=(a*x)+1;
        cout<<ans<<endl;
        return;
    }



}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}