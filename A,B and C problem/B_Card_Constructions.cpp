#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<ll> a;
void solve(){
    ll n;
    cin>>n;
    int ans=0;
    while(n>0){
        ll idx=lower_bound(a.begin(),a.end(),n)-a.begin();
        if(a[idx]==n){
            ans++;
            n-=a[idx];
        }else{
            if(idx-1==0){
                break;
            }
            ans++;
            n-=a[idx-1];
        }

    }
    cout<<ans<<endl;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    a.push_back(0);
    a.push_back(2);
    for(int i=2;i<=100000;i++){
        ll val=a[i-1]+i*2+(i-1);
        a.push_back(val);
    }
    while(t--) solve();

    return 0;
}