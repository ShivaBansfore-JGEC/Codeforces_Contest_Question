#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int zero=0,one=0;
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==0) zero++;
        if(b[i]==1) one++;
    }
    if(is_sorted(a,a+n)){
        cout<<"Yes"<<endl;
        return;
    }

    if(zero==0 or one==0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}