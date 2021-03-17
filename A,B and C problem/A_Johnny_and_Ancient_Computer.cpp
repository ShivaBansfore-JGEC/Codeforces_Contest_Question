#include<bits/stdc++.h>
using namespace std;


void solve(){
  
    long long a,b,c=0,d=0;
    cin>>a>>b;
    while(a%2==0) a/=2,c++;
    while(b%2==0) b/=2,d++;

    if(a==b) cout<<(abs(c-d)+2)/3<<endl;
    else cout<<"-1"<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
        return 0;
    }