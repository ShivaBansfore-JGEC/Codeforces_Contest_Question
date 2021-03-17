#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x=s[i]-'0';
        x--;
        a.push_back(x);
    }
    map<ll,ll> mm;
    ll ans =0;
    ll r=0;
    mm[0]=1;
    for(int i=0;i<n;i++){
        r+=a[i];
        ans+=mm[r];
        mm[r]++;
    }
    cout<<ans<<endl;  
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}