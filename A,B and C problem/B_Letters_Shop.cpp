#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> pos[26];
    for(int i=0;i<n;i++){
        pos[s[i]-'a'].push_back(i+1);
    }

    int m;
    cin>>m;
    string t;
    for(int i=0;i<m;i++){
        cin>>t;
        vector<int> cnt(26);
        for(auto &c:t){
            ++cnt[c-'a'];
        }

        int ans=-1;
        for(int j=0;j<26;j++){
            if(cnt[j]>0){
                ans=max(ans,pos[j][cnt[j]-1]);
            }
        }
        cout<<ans<<endl;
    }

 
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}