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
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int max_so_far = INT_MIN, max_ending_here = 0;
    
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
            v.push_back(max_so_far);
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }

    if(k==1){
        cout<<max_so_far<<endl;
    }else{
        if(k==2){
            ll prefix[n];

            ll ans=a[0],curr=0;

            for(int i=0;i<n;i++){
                curr+=a[i];
                ans=max(ans,curr);
                prefix[i]=ans;

                if(curr<0){
                    curr=0;
                }
            }

            ll sufix[n];
            ans=a[n-1],curr=0;

            for(int i=n-1;i>=0;i--){
                curr+=a[i];
                ans=max(ans,curr);
                sufix[i]=ans;
                if(curr<0){
                    curr=0;
                }
            }

            ans=INT_MIN;
            for(int i=0;i<n-1;i++){
                ans=max(ans,prefix[i]+sufix[i+1]*2);
            }

            cout<<ans<<endl;
        }

    }

}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}