#include<bits/stdc++.h>
using namespace std;


void solve(){
    
    int l,r;
    cin>>l>>r;
    if(2*l<=r){
        cout<<l<<" "<<2*l<<endl;
    }else{
        cout<<-1<<" "<<-1<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
        return 0;
}