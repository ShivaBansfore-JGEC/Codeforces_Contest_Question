#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]+=1;
    }

    for(int i=n-1;i>=0;i--){
        if(mp[s[i]]>1){
            cout<<"YES"<<endl;
            return;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }


}
int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
}