#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int n1=n/4;
    if(n%4!=0){
        n1++;
    }
    n-=n1;
    for(int i=0;i<n;i++){
        cout<<9;
    }

    for(int i=0;i<n1;i++){
        cout<<8;
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}