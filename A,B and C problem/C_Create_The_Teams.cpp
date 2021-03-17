#include<bits/stdc++.h>
#define ll long long 
using namespace std;



void solve(){

    ll n,x;
    cin>>n>>x;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n,greater<ll>());
    ll teams=0;
    ll val;
    ll cnt=1;
    for(int i=0;i<n;i++){
        val=arr[i]*cnt;
        if(val>=x){
            teams++;
            cnt=1;
        }else{
            cnt++;
        }

    }
    cout<<teams<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}