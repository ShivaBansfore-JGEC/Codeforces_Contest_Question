#include<bits/stdc++.h>
#define ll long long 
using namespace std;

bool ok(int res,int d){
    ll sum=res* 1LL *(res+1)/2;
    if(sum<d){
        return false;
    }
    return sum%2==d%2;
}


void solve(){
    int a,b;
    cin>>a>>b;
    int d=abs(a-b);

    if(d==0) {
        cout<<"0"<<endl;
        return;
    }
    int res=1;
    while(!ok(res,d)){
        res++;
    }
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}