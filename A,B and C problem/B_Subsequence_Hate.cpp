#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.size();

    int suf0=0,suf1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') suf0++;
        else suf1++;
    }
    int ans=min(suf0,suf1);
    int pref0=0,pref1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            pref0++;
            suf0--;
        }else{
            pref1++;
            suf1--;
        }

        ans=min(ans,pref0+suf1);
        ans=min(ans,pref1+suf0);
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