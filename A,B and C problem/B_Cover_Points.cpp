#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
 
void solve(){
    
    int n;
    cin>>n;
    int mx=0;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        mx=max(mx,x+y);
        
    }
    cout<<mx<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}