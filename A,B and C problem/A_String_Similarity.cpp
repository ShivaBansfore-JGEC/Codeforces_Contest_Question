#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i%2==0) cout<<s[i];
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