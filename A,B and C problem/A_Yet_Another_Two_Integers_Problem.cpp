#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){

    ll a,b;
    cin>>a>>b;
    if(a>b){
        swap(a,b);
    }
    ll diff=(b-a);
    if(a==b){
        cout<<0<<endl;
        return;
    }

    if(diff<=10){
        cout<<1<<endl;
    }else{
        cout<<(int)ceil((double)diff/(double)10)<<endl;
    }

 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}