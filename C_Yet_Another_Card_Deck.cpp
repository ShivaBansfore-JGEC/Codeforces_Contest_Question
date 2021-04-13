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


void solve(){
    int n,k;
    cin>>n>>k;

    int a[n],b[k];
    map<int,int> mppp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mppp[a[i]]==0){
            mppp[a[i]]=i+1;
        }
    }

    mp mpp;
    int cnt=0;
    for(int i=0;i<k;i++){
        cin>>b[i];
        if(mpp[b[i]]==0){
            int cnt=0;
            for(int j=0;j<i;j++){
                if(mppp[b[j]]>mppp[b[i]]){
                    cnt++;
                }
            }
            cout<<mppp[b[i]]+cnt<<" ";
            mpp[b[i]]=i+1;
        }else{
            int ans=(i+1)-mpp[b[i]];
            mpp[b[i]]=i+1;
            cout<<ans<<" ";

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