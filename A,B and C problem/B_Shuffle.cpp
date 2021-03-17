#include<bits/stdc++.h>
using namespace std;

void solve(){
    int  n,x,m,l,r;
    cin>>n>>x>>m;
    int x1=x,x2=x;
    int ans=0;
    for(int i=0;i<m;i++){
        cin>>l>>r;
        if((l<=x1 && r>=x1)){
            x1=l;
        }
        if(l<=x2 && r>=x2){
            x2=r;
        }

    }
    cout<<x2-x1+1<<endl;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}