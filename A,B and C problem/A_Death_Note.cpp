#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
void solve(){
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    ll limit=m;
    for(int i=0;i<n;i++){
        ll turn=0;
        if(arr[i]<limit){
            limit-=arr[i];
            cout<<turn<<" ";
            continue;
        }
        if(limit<arr[i]){
            turn++;
            arr[i]-=limit;
            limit=m;
        }
        turn+=(arr[i])/limit;
        if(arr[i]<limit){
            limit-=arr[i];
        }
        cout<<turn<<" ";
    }
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}