#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    int l=n*(a-b);
    int r=n*(a+b);
    if(r<(c-d) || (c+d)<l){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}