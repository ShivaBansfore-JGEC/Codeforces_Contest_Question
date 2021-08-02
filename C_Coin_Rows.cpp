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

    int a[2][n];
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int row1[n],row2[n];

    row1[n-1]=a[0][n-1];

    for(int i=n-2;i>=0;i--){
        row1[i]=a[0][i]+row1[i+1];
    }

    row2[n-1]=a[1][n-1];

    for(int i=n-2;i>=0;i--){
        row2[i]=a[1][i]+row2[i+1];
    }

    if(n==1){
        cout<<0<<endl;
        return;
    }

    int ans=INT_MAX;

    for(int i=0;i<n;i++){
        if(i==0){
            ans=min(ans,row1[1]);
        }else if(i==n-1){
            ans=min(ans,row2[0]-a[1][n-1]);
        }else{
            ans=min(ans,max(row1[i+1],row2[0]-row2[i]));
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