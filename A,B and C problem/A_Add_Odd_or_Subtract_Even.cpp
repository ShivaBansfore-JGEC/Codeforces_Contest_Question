#include<bits/stdc++.h>
using namespace std;


void solve(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
    }else{
        if(a<b){
            int diff=(b-a);
            int ans=0;a
            if(diff%2!=0){
                ans=1;
            }else{
                ans=2;
            }
            cout<<ans<<endl;
        }else if(a>b){
            int diff=(a-b);
            int ans=0;
            if(diff%2!=0){
                ans=2;
            }else{
                ans=1;
            }
            cout<<ans<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}