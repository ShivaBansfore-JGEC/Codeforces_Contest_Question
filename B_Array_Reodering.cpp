// Author : Shiva Bansfore
// College : Jalpaiguri Government Engineering College
// Address : Siliguri,West Bengal

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define all(a) a.begin(),a.end()
#define pie 3.1415926535898
#define mod (ll)(998244353)
#define MOD (int) 1e9+7
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=b-1;i>=a;i--)
#define vi vector<int>
#define vii vector<vector<>> 
#define mp map<ll,ll> 
#define inf (ll)(1e18)
#define inff INT_MIN 
#define pb emplace_back
#define sz(s) s.size()
#define ff first
#define ss second
#define bits(n) __builtin_popcount(n)
#define rr return 0
#define ini(a, i) memset(a, i, sizeof(a))
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}


void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n),v1,v2,v3;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            v1.push_back(a[i]);
        }else{
            v2.push_back(a[i]);
        }
    }

    for(ll u:v1){
        v3.push_back(u);
    }

    for(ll u:v2){
        v3.push_back(u);
    }

    ll ans=0;

    for(int i=0;i<n;i++){
        ll v1=v3[i];
        bool flag=1;
        for(int j=i+1;j<n;j++){
            ll v2=v3[j];
            if(__gcd(v1,2*v2)>1){
                ans++;
            }
        }
    }

    cout<<ans<<endl;


}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}