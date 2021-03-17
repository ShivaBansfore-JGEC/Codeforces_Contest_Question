#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    if(n<k){
        cout<<k-n<<endl;
    }else{
        if(n%2==k%2){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
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