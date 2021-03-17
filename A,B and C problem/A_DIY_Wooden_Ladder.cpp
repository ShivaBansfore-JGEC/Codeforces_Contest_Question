#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    cout<<min(arr[n-2]-1,n-2)<<endl;



 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}