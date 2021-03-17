#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
     ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=maxi-arr[i];
    }
    k--;
    maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
    }

    if(k&1){
        for(int i=0;i<n;i++){
            arr[i]=maxi-arr[i];
        }
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}