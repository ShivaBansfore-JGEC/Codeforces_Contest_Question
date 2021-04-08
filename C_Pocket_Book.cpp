#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
long long ans=1;

for(int i=0;i<m;i++){
    set<char> st;
    for(int j=0;j<n;j++){
        st.insert(a[j][i]);
    }
    ans=(ans*st.size())%mod;
}


cout<<ans<<endl;
    return 0;
}