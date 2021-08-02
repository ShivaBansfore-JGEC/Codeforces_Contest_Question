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

    vector<int> a(n),b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    sort(all(a),greater<int>());
    sort(all(b),greater<int>());

    int k=n-n/4;
    ll a_sum=0,b_sum=0;
    int i=0;
    while(i < n && k > 0){
        a_sum+=a[i];
        b_sum+=b[i];
        i++;
        k--;
    }
    if(a_sum>=b_sum){
        cout<<0<<endl;
        return;
    }

    vector<ll> p1(n+1,0),p2(n+1,0);
    p1[n]=a[n-1];
    p2[n]=b[n-1];

    for(int i=n-1;i>=1;i--){
        p1[i]=p1[i+1]+a[i-1];
        p2[i]=p2[i+1]+b[i-1];
    }

    if(n==1){
        if(a_sum < b_sum){
            cout<<1<<endl;
            return;
        }
    }

    int l=1,r=n;
    int ans=INT_MAX;

    int i=1;
    int stage=n;
    while( i <= n){

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