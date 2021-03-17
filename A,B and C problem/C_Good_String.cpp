#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.length();

    int fre[10]={};
    for(int i=0;i<n;i++){
        fre[s[i]-'0']++;
    }

    int mx=0;
    for(int i=0;i<10;i++){
        mx=max(mx,fre[i]);
    }

    int ans=n-mx;
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            int c=0;
            bool f=true;
            for(int k=0;k<s.length();k++){
                if(f && s[k]=='0'+i){
                    c++;
                    f=false;
                }else if(!f && s[k]=='0'+j){
                    c++;
                    f=true;
                }
            }

            if(c%2!=0) c--;
            ans=min(ans,n-c);
        }
    }

    cout<<ans<<endl;


}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}