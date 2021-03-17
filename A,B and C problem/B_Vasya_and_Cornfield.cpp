#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
 
void solve(){
    
    int n,d;
    cin>>n>>d;
    int m;
    cin>>m;

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        bool flag=true;
        if(!(x-y<=d && x-y>=-d)){
            flag=false;
        }
        if(!(x+y<=n+n-d && x+y>=d)) flag=false;

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}