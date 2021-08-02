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

    int k,n,m;
    cin>>k>>n>>m;

    vector<int> a(n),b(m);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int j=0;j<m;j++){
        cin>>b[j];
    }

    vector<int> ans;
    int i=0,j=0;
    int curr=k;
    while(i < n && j < m){
        if(a[i] < b[j]){
            if(a[i]==0){
                ans.push_back(0);
                curr++;
            }else{
                if(curr>=a[i]){
                    ans.push_back(a[i]);
                }else{
                    cout<<"-1"<<endl;
                    return;
                }
            }
            i++;
        }else{
            if(b[j]==0){
                ans.push_back(0);
                curr++;
            }else{
                if(curr>=b[j]){
                    ans.push_back(b[j]);
                }else{
                    cout<<"-1"<<endl;
                    return;
                }
            }

            j++;
        }
    }


    while( i < n){
        if(a[i]==0){
            ans.push_back(0);
            curr++;
        }else if(a[i]!=0){
            if(curr>=a[i]){
                ans.push_back(a[i]);
            }else{
                cout<<-1<<endl;
                return;
            }
        }

        i++;
    }



    while( j < m){
            if(b[j]==0){
                ans.push_back(0);
                curr++;
            }else{
                if(curr>=b[j]){
                    ans.push_back(b[j]);
                }else{
                    cout<<"-1"<<endl;
                    return;
                }
            } 

            j++;  
    }


for(int u:ans){
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