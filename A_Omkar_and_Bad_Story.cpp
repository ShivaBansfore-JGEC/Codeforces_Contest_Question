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
    vector<int> a(n),ans;
    set<int> st;
    int mx=INT_MIN;
    bool flag=1,f2=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] < 0){
            flag=0;
        }

        if(a[i]==0){
            f2=0;
        }

        mx=max(mx,a[i]);
       
    }

    if(flag==0){
        cout<<"NO"<<endl;
        return;
    }

    for(int i=1;i<=mx;i++){
        st.insert(i);
    }

    if(f2==0){
        st.insert(0);
    }

    cout<<"YES"<<endl;
    cout<<st.size()<<endl;
    for(int u:st){
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