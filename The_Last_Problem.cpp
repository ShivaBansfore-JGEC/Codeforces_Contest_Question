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

int mat[1005][1005];
void solve(){
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    
    ll start=1;
    int row=1,col=1;
    while(row<x1){
        col++;
        start+=col;
        row++;
    }
    col=1;
    while(col<y1){
        start+=row;
        row++;
        col++;
    }


    col=y1+(x1-1);
    row=x1;
    ll val=start;
    while(row<x2){
        col++;
        val+=col;
        start+=val;
        row++;
    }


    row=x2+(y1-1);
    col=y1;
    ll val1=val;
    while(col<y2){
        val+=row;
        //cout<<start+row<<endl;
        start+=val;
        row++;
        col++;
    }

    cout<<start<<endl;








}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}