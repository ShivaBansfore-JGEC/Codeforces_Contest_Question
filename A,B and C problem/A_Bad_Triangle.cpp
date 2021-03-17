#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
     ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ll i=0;
    ll j=1;
    ll k=0;
    ll tot=arr[i]+arr[j];
    bool f=0;
    for(int i=2;i<n;i++){
        if(arr[i]>=tot){
            f=1;
            k=i;
            break;

        }
    }
    vector<ll> a;
    a.push_back(i+1);
    a.push_back(j+1);
    a.push_back(k+1);
    if(f==0){
        cout<<-1<<endl;
    }
    else{
        sort(a.begin(),a.end());
        for(ll u:a){
            cout<<u<<" ";
        }
        cout<<endl;
    }
    
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}