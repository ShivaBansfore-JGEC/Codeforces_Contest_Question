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


template <class t> class MergeSortTree{
	public:
		int _l, _r, _m;
		vector<t> v;
		MergeSortTree *left, *right;
		MergeSortTree(int l, int r, vector<t> &e){
			_l=l, _r=r, _m=(l+r)/2, v[0]=e[l];
			v.resize(r-l+1);
			if(l==r)	left=right=nullptr;
			else{
				left=new MergeSortTree(_l,_m, e);
				right=new MergeSortTree(_m+1,_r, e);
				merge(left->v.begin(), left->v.end(), right->v.begin(), right->v.end(), v.begin());
			}
		}
		int count(int l, int r, t a, t b){ //Number of x -> a<=x<=b and x is between l and r
			if(l>_r || r<_l) return 0;
			if(_l>=l && _r<=r)	return upper_bound(v.begin(), v.end(), b)-lower_bound(v.begin(), v.end(), a);
			return left->count(l,r,a,b)+right->count(l,r,a,b);
		}
};
int main(){
	vector<int> v={1,5,2,7,4,1};
	MergeSortTree<int> mt(0,v.size()-1,v);
	cout<<mt.count(0,v.size()-1,0,7);
}






void solve(){

   ll n,m;
   cin>>n>>m;
   vector<int> v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];
   }

   MergeSortTree<int> mt(0,v.size()-1,v);

   for(int i=0;i<m;i++){
       int l,r;
       cin>>l>>r;
   }


}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}