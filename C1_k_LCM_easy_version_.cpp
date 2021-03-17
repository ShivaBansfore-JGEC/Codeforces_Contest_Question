#include<bits/stdc++.h>
#define ll long long
using  namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;
    if(n==3){
        cout<<1<<" "<<1<<" "<<1<<endl;
        return;
    }else{
        if(n%2==0){
            long long val=n/2;
            if(val%2==0){
                cout<<val/2<<" "<<val/2<<" "<<val<<endl;
            }else{
                cout<<2<<" "<<val-1<<" "<<val-1<<endl;
            }

        }else{
            cout<<1<<" "<<n/2<<" "<<n/2<<endl;
        }
    }
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}