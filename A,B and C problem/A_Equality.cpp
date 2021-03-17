#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
map<char,int> mp;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set<char> s1;
    for(int i=0;i<n;i++){
        s1.insert(s[i]);
        mp[s[i]]++;
    }
    if(s1.size()<k){
        cout<<0<<endl;
        return;
    }
    int mn=INT_MAX;
    for(char u:s1){
        if(mn>mp[u]){
            mn=mp[u];
        }
    }
    cout<<mn*k<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}