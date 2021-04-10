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
 
 
void solve(){
    int n,s;
    cin>>n>>s;

    if(s==0){
        cout<<-1<<" "<<-1<<endl;
    }else if(9*n < s){
        cout<<-1<<" "<<-1<<endl;

    }else{
        
        int l=0,n1,v1,r,v2,n2;

        for(int i=1;i<=9;i++){
            for(int j=1;j<=n;j++){
                if(j<n){
                    if(s-(i*j) <= 9 && s-(i*j)>=0){
                        if(l==0){
                            l=i;
                            v1=s-(i*j);
                            n1=j;
                        }
                        r=i;
                        v2=s-(i*j);
                        n2=j;
                    }
                }else{
                    if(s-(i*j)==0){
                        if(l==0){
                            l=i;
                            v1=s-(i*j);
                            n1=j;
                        }
                        r=i;
                        v2=s-(i*j);
                        n2=j;
                    }
                }
   
            }
        }

        //find smallest 
        //case 1: if n1 < n-1
        //case 2: if n1==n
        //case 3: if n1==n-1

        vector<int> smallest;
        if(n1==n){
            for(int i=0;i<n;i++){
                smallest.push_back(l);
            }
        }else if(n1 == n-1){

            for(int i=0;i<n-1;i++){
                smallest.push_back(l);
            }
            smallest.push_back(v1);

        }else{
            int zero_put=(n-1)-n1;
            smallest.push_back(l);
            n1-=1;
            for(int i=0;i<zero_put;i++){
                smallest.push_back(0);
            }
            for(int i=0;i<n1;i++){
                smallest.push_back(l);
            }
            smallest.push_back(v1);
        }




        //find the largest 
        vector<int> largest;
        if(n2==n){
            for(int i=0;i<n;i++){
                largest.push_back(r);
            }
        }else if(n2 == n-1){

            for(int i=0;i<n-1;i++){
                largest.push_back(r);
            }
            largest.push_back(v2);

        }else{
            int zero_put=(n-1)-n2;
            for(int i=0;i<n2;i++){
                largest.push_back(r);
            }
            largest.push_back(v2);

            for(int i=0;i<zero_put;i++){
                largest.push_back(0);
            }
        }

        sort(smallest.begin(),smallest.end());

        if(smallest[0]==0){
            for(int i=1;i<smallest.size();i++){
                if(smallest[i]>0){
                    smallest[0]=smallest[i];
                    smallest[i]=0;
                    break;
                }
            }
        }
        sort(largest.begin(),largest.end(),greater<int> ());

        for(int u:smallest) cout<<u;
        cout<<" ";
        for(int u:largest) cout<<u;

        cout<<endl;



    }
 
}
 
int main(){
    fio;
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}