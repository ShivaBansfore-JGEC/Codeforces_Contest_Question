#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;

    int a[5];
    a[0]=0;
    a[1]=20;
    a[2]=40;
    a[3]=56;
    a[4]=60;
    if(n==1){
        cout<<a[n]<<endl;
    }else if(n==2){
        cout<<a[n]<<endl;
    }else if(n==3){
         cout<<a[n]<<endl;
    }else if(n==4){
         cout<<a[n]<<endl;
    }else{
        int d=n/4;
        int r=n%4;
        long long ans=(36*(d-1))+60;
        ans-=(r*6);
        ans+=a[r];
        cout<<ans<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}