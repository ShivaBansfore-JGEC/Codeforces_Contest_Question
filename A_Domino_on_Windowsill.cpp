#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k1,k2;
    cin>>n>>k1>>k2;
    int w,b;
    cin>>w>>b;
    int val1=k1+k2;
    int val2=(2*n)-val1;
    if(val1>=(2*w) && val2>=(2*b)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}