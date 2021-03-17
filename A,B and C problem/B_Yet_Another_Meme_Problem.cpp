#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long a,b;
    cin>>a>>b;
    b++;
    string x=to_string(b);
    cout<<a*((x.size())-1)<<endl;


}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}