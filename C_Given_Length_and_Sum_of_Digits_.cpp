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
#define map map<ll,ll> 
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
 
 int ln,rem;

 bool is_possible(int v,int len,int s){

     bool flag=false;
     for(int i=1;i<=len-1;i++){
         int val=s-(i*v);
         if(val<=9){
             ln=i;
             rem=val;
             flag=true;
             break;
         }
     }

    return flag;

 }
 
void solve(){
    int n,s;
    cin>>n>>s;

    if(s<1){
        cout<<-1<<" "<<-1<<endl;
    }else if(9*n < s){
        cout<<-1<<" "<<-1<<endl;

    }else{
        vector<int> ans(n,0);
        for(int i=1;i<=9;i++){
            ln=n;
            if(is_possible(i,n,s)==true){
                ans[0]=i;
                ln-=1;
                ans[n-1]=rem;
                int k=n-2;
                while(ln>0){
                    ans[k]=i;
                    k--;
                    ln--;
                }

                break;
            }
        }

        for(int u:ans){
            cout<<u;
        }
        cout<<" ";



        
    }
 
}
 
int main(){
    fio;
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}