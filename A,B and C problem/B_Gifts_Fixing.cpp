#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int a[n],b[n];

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    int mina=*min_element(a,a+n);
    int minb=*min_element(b,b+n);

    long long ans=0;
    for(int i=0;i<n;i++){
        ans+=max(a[i]-mina,b[i]-minb);
    }
    cout<<ans<<endl;


   
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}