#include<bits/stdc++.h>
using namespace std;


void solve(){
  
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        if(i%2==0) cout<<abs(x)<<" ";
        else cout<<-abs(x)<<" ";
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