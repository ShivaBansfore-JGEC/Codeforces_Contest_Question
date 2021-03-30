#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,m,x;
    cin>>n>>m>>x;
    long long col=ceil(x*1.0/n*1.0);
    long long row=x%n;
    if(row==0){
        row=n;
    }
    long long ans=(long long)((row-1)*m)+col;
    cout<<ans<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}