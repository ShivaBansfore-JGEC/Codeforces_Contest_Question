#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n;
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<n/i<<" "<<(n/i)*(i-1)<<endl;
            return;
        }
    }
    cout<<1<<" "<<n-1<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}