#include<bits/stdc++.h>
#define ll long long 
using namespace std;



void solve(){

    int a,b,p;
    cin>>a>>b>>p;
    string s;
    cin>>s;
    int n=s.length();
    s[n-1]='#';
    for(int i=n-1;i>0;--i){
        if(s[i-1]!=s[i]){
            if(s[i-1]=='A'){
                p-=a;
            }else p-=b;
        }

        if(p<0){
            cout<<i+1<<endl;
            break;
        }
    }

    if(p>=0){
        cout<<1<<endl;
    }
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}