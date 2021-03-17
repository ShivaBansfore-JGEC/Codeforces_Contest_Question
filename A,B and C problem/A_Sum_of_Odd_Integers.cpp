#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long n,k;
    cin>>n>>k;
    
    if(k*k<=n && n%2==k%2){
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