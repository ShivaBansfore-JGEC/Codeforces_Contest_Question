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




const int N=1e7+2;

vector<bool> prime(N,true);
vector<ll> prefix(N);


void sieve(){

    prime[0]=false;
    prime[1]=false;

    for(int i=2;i*i<=N;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=N;j+=i){
                prime[j]=false;
            }
        }
    }


    for(int i=2;i<=N;i++){
        if(prime[i]==true){
            prefix[i]=prefix[i-1]+1;
        }else{
            prefix[i]=prefix[i-1];
        }
    }



}


void solve(){
    ll n;
    cin>>n;
    if(n<=3){
        cout<<n-1<<endl;
        return;
    }
    
    // for(int i=1;i<=n;i++){
    //     cout<<prefix[i]<<" ";
    // }

    // cout<<endl;

    ll ans=1+prefix[n]-prefix[n/2];
    cout<<ans<<endl;



}

int main(){
   fio;
   sieve();
   int t=1;
   cin>>t;

   while(t--) solve();
return 0;
}