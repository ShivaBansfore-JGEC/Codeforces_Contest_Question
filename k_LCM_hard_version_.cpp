#include<bits/stdc++.h>
#define ll long long
using  namespace std;

bool check(int k,int n,int mid){
    int val=mid*(k);
    if(val<=n){
        return true;
    }else{
        return false;
    }
}

void solve(){
    long long n,k;
    cin>>n>>k;
    int val=n/2;
    int ans=1;
    for(int i=1;i<=n;i++){
        if(n/i<=k){
            int r=n%i;
            if(r==0){
                    for(int j=0;j<k;j++){
                        cout<<i<<" ";
                    }
                    cout<<endl;
                    return;
            }else{
                if(r<=n/2 && i%r==0){
                    for(int j=0;j<k-1;j++){
                        cout<<i<<" ";
                    }
                    cout<<r<<endl;
                    return;
                }
            }
        }
    }

}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}