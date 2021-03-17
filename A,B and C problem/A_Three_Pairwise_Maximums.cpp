#include<bits/stdc++.h>
using namespace std;


void solve(){
  
    int x,y,z,a,b,c;
    cin>>x>>y>>z;
    a=min(x,y),b=min(x,z),c=min(y,z);
    if(x==max(a,b) && y==max(a,c) && z==max(b,c)){
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
        return 0;
}