#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    long long ans=0;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        ans+=min(a[x],a[y]);
    }

    cout<<ans<<endl;


}

int main(){
    int t=1;
    while(t--) solve();
    return 0;
}