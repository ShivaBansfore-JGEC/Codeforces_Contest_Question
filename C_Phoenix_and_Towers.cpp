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


struct st{
    ll val,idx;
};

bool compare(const st s1,const st s2){
    return s1.val>s2.val;
}

void solve(){
    ll n,m,x;
    cin>>n>>m>>x;

    vector<st> a(n);
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        st s;
        s.val=x;
        s.idx=i;
        a[i]=s;
    }

    sort(a.begin(),a.end(),compare);

    cout<<"YES"<<endl;
    vector<ll> v(n);
    int k=1;
    for(int i=0;i<n;i++){
        v[a[i].idx]=(k);
        k++;
        if(k>m){
            k=1;
        }
    }

    for(int u:v){
        cout<<u<<" ";
    }

    cout<<endl;

}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}