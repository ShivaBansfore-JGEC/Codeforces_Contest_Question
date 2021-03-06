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
#define rr return 
#define ini(a, i) memset(a, i, sizeof(a))
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}


void solve(){

    ll n,m;
    cin>>n>>m;
    bool flag=0;
    int a[n][m];

     vector<pair<ll,pair<ll,ll>>> pp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
        sort(a[i],a[i]+m);

        for(int j=0;j<m;j++){
            pp.push_back({a[i][j],{i,j}});
        }
    }

    sort(pp.begin(),pp.end());

    for(int k=(m-1);k>=0;k--){
        int x=pp[k].second.first;
        int  y=pp[k].second.second;
        swap(a[x][y],a[x][k]);
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}