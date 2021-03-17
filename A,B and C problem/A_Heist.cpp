#include<bits/stdc++.h>
#define ll long long 
using namespace std;


void solve(){

    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll x=a[0];
    ll y=a[n-1];
    cout<<y-x+1-n<<endl;

    ll k=1000000000000000000;
    ll ki=999999866000004473;
    cout<<k/ki<<endl;

}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}