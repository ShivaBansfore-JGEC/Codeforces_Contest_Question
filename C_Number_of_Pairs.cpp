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


int binary_search(vector<int> &a,int k){
    
    int lo=0,hi=a.size()-1;

    while(lo < hi){
        int mid=(lo+hi)/2;
        if(a[mid]<=k){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }

    if(k==7){
        cout<<lo<<endl;
    }

    return hi;
}

void solve(){
    int n,l,r;
    cin>>n>>l>>r;

    vector<int> a(n);
    map<int,int> mpp;
    int mn=INT_MAX,mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
        mpp[a[i]]++;
    }


    sort(all(a));
    for(int i:a){
        cout<<i<<" ";
    }

    cout<<endl;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>r){
            continue;
        }else if(a[i] >=l){
            int val=r-a[i];
            cout<<a[i]<<"--->"<<binary_search(a,val);
        }else if(a[i] < l){
            int left=l-a[i];
            int right=left+(r-l);
            cout<<a[i]<<"--->"<<"{"<<left<<","<<binary_search(a,left)<<"}"<<"{"<<right<<","<<binary_search(a,left)<<"}"<<endl;
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