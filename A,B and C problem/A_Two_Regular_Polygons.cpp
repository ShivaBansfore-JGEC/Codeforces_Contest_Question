#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,m;
    cin>>n>>m;
    if(n%m==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}