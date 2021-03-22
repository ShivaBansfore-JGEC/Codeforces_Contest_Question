#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int i;

    vector<int> a(n+1,0),c(n+1,0);
    
    for(i=1;i<=n;i++){
        cin>>a[i];
        c[i]=c[i-1]+a[i];
    }

    int  mini_one=k;
    int total_ones=c[n];
    for(i=k;i<=n;i++){
        int ones=c[i]-c[i-k];
        mini_one=min(mini_one,ones);
    }
    int ans=mini_one * (mini_one + 1) / 2 + total_ones-mini_one;
    cout<<ans<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}