#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,w;
    cin>>n>>w;
    long long arr[n];
    map<long long,long long> mp;
    set<long long> st;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        st.insert(arr[i]);
    }
    long long ans=0;
    for(int u:st){
        ans=max(ans,mp[u]);
    }
    cout<<ans<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}