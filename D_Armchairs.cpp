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
    int n;
    cin>>n;

    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<int> one,zero;
    for(int i=1;i<=n;i++){
        if(a[i]==1){
            one.push_back(i);
        }else{
            zero.push_back(i);
        }
    }

    sort(all(one),greater<int>());
    sort(all(zero),greater<int>());


    vector<int> vis(zero.size(),false);
    int ans=0;
    for(int i=0;i<one.size();i++){
        int mn=n,id=i;
        for(int j=0;j<zero.size();j++){
            if(vis[j]==false){
                if(abs(zero[j]-one[i])<mn){
                    mn=abs(zero[j]-one[i]);
                    id=j;
                }
            }
        }

        vis[id]=true;
        ans+=abs(one[i]-zero[id]);
    }
    cout<<ans<<endl;


}

int main(){
   fio;
   int t=1;
   //cin>>t;
   while(t--) solve();
return 0;
}