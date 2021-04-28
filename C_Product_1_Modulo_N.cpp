// Author : Shiva Bansfore
// College : Jalpaiguri Government Engineering College
// Address : Siliguri,West Bengal

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
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


bool isPrime(int n)
{   
    bool isprime=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=false;
        }
    }
    return isPrime;
   
}

void solve(){
    int n;
    cin>>n;
    vector<ll> ans(100005,0);
    ll res=1;
    for(int i=1;i<n;i++){
        if(__gcd(n,i)==1){
            ans[i]=1;
            res=(res*i)%n;
        }
    }
    if(res!=1){
        ans[res]=0;
    }

   ll c= count(ans.begin(),ans.end(),1);
   cout<<c<<endl;

   for(int i=1;i<n;i++){
       if(ans[i]){
           cout<<i<<" ";
       }
   }

   cout<<endl;

}

int main(){
   fio;
   int t=1;
   //cin>>t;
   while(t--) solve();
return 0;
}