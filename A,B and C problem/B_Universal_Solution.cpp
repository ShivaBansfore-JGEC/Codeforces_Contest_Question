#include<bits/stdc++.h>
using namespace std;



void solve(){

    string s;
    cin>>s;
    int n=s.size();
    string ans="";
    int R=0,P=0,S=0,mx;
    for(int i=0;i<n;i++){
        if(s[i]=='R') R++;
        if(s[i]=='P') P++;
        if(s[i]=='S') S++;
    }

    mx=max({R,S,P});
    if(mx==R){
        for(int i=0;i<n;i++){
            cout<<'P';
        }
    }else if(mx==S){
        for(int i=0;i<n;i++){
            cout<<'R';
        }

    }else if(mx==P){
        for(int i=0;i<n;i++){
            cout<<'S';
        }
    }

    cout<<endl;

    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}