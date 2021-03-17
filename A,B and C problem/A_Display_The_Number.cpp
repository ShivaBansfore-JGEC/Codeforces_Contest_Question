#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    while(n>0){
    if(n%2==1){
        cout<<7;
        n-=3;
    }

    while(n>0){
        cout<<1;
        n-=2;
    }
    }
    cout<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}