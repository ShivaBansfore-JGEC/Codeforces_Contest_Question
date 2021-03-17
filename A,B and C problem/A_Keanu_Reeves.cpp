#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one=0;
    int zero=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') zero++;
        else one++;
    }
    if(zero!=one){
        cout<<1<<endl;
        cout<<s<<endl;
    }else {
        string ans="";
        for(int i=0;i<n-1;i++){
            ans+=s[i];
        }
        cout<<2<<endl;
        cout<<ans<<" "<<s[n-1]<<endl;
    }
 
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}