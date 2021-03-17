#include<bits/stdc++.h>
using namespace std;



void solve(){
    long long l,r,m,a,b;
    cin>>l>>r>>m;
    for(int i=l;i<=r+1;i++){

        a=m%i;
        b=i-a;

        if((b+l)<=r){
            cout<<i<<" "<<l<<" "<<b+l<<endl;
            break;
        }
        if((l+a)<=r){
            cout<<i<<" "<<l+a<<" "<<l<<endl;
            break;
        }

    }
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}