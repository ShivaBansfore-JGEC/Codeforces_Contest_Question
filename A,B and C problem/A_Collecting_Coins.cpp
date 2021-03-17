#include<bits/stdc++.h>
using namespace std;


void solve(){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int m=max(max(a,b),(b,c));
    long long sum=0;
    if(a!=m){
        sum+=(m-a);
    }
    if(b!=m) sum+=(m-b);
    if(c!=m) sum+=(m-c);
    if(sum>n){
        cout<<"NO"<<endl;
        return;
    }
    n-=sum;
    if(n%3==0){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;

   
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}