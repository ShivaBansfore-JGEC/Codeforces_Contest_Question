#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){

    ll n,k;
    cin>>n>>k;

    ll mn=INT_MAX;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mn=min(arr[i],mn);
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=(arr[i]-mn);
    }

    cout<<ceil((double) sum/(double)k)<<endl;

}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}