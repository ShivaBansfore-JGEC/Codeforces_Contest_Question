#include<bits/stdc++.h>
#define ll long long
using namespace std;

int func(vector<int> a,int val){
    int mn=INT_MAX;
    //cout<<val<<" ";
    for(int i=0;i<a.size();i++){
        mn=min(mn,(val&a[i]));
    }
    return mn;
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];


    ll k=0;
    ll ans=0;
    ll c=0;
    for(k=512;k>=0;k--){
         c=0;
        for(int i=0;i<n;i++){
            ll l=k;
            for(int j=0;j<m;j++){

                if((l|(a[i]&b[j]))==l){
                    c++;
                    break;
                }
            }
        }

        if(c==n)
        ans=k;
    }
    cout<<ans<<endl;



}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}