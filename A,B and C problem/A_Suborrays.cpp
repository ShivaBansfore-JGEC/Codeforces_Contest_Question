#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int i=1;
    int j=n;
    while(i<=j){
        if(i==j){
            cout<<j<<" ";
        }else{
            cout<<j<<" ";
            cout<<i<<" ";
        }

        i++;
        j--;
    }
    cout<<endl;
}


int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}