#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long  n,g,b;
    cin>>n>>g>>b;

    long long needg=(n+1)/2;
    long long total=needg/g*(g+b);
    total+=(needg%g==0L) ? -b : needg%g;
    cout<<max(n,total)<<endl;
    

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}