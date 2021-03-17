#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int st=n%10;
    int ans=0;
    ans+=(10*(st-1));
    int val=0;
    while(n){
        n/=10;
        val++;
        ans+=val;
    }
    cout<<ans<<endl;
}
int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}