#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    cout<<(n+(n-1)/9)<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}