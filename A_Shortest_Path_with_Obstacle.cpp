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

    int x1,y1,x2,y2,f1,f2;
    cin>>x1>>y1>>x2>>y2>>f1>>f2;
    int ans=abs(x2-x1)+abs(y2-y1);

    if((x1==f1 && x2==f1)){
        
        if(f2 > min(y1,y2) && f2 < max(y1,y2)){
            ans+=2;
        }
    }else if( (y1==f2 && y2==f2)){
        if(f1 > min(x1,x2) && f1 < max(x1,x2)){
            ans+=2;
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