#include<bits/stdc++.h>
#define ll long long 
using namespace std;



ll func(int diff,int a,int b){
    int dp[10];
    for(int i=0;i<10;i++) dp[i]=0;

    for(int i=1;i<=a;i++){

    } 
}


void solve(){
    ll a,b;
    cin>>a>>b;
    //cout<<a<<b<<endl;
    if(b>a){
        swap(a,b);
    }
    cout<<func((a-b),a,b)<<endl;
    cout<<"hi"<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}