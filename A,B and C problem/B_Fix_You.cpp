#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
long long power(long long a,long n){
    long long res=1;
    while(n){
        if(n%2){
            res=res*a;
            n-=1;
        }
         a*=a;
        n/=2;
    }
    return res;
}
void solve(){
    int n,m;
    cin>>n>>m;
    string s;
    vector<string> a;
    for(int i=0;i<n;i++){
        cin>>s;
        a.push_back(s);

    }
    int ans=0;

    for(int i=0;i<a.size();i++){
        if(a[i][m-1]=='R') ans++;
    }
    for(int i=0;i<a[n-1].size();i++){
        if(a[n-1][i]=='D') ans++;
    }
    cout<<ans<<endl;
    cout<<583291%mod<<endl;
}


int main(){
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}