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
    ll n,pos;
    cin>>n>>pos;
    string s;
    cin>>s;

    int mid=(n/2);

    if(pos==mid){
        //go to left direction
        int ans=INT_MAX;
        int cost1=0,cost2=0;

        int i=mid-1;
        while(i>=0){
            //find corresponding index
            int j=(n-i-1);
            if(s[i]!=s[j]){
                int mn=INT_MAX;
                if(s[i] < s[j]){
                    //cout<<s[i]<<" "<<s[j]<<endl;
                    int v1=(s[j]-'a')-(s[i]-'a');
                    int v2=((s[i]-'a') + (26-(s[j]-'a')));
                    mn=min(v1,v2);
                    s[i]=s[j];
                }else{
                    int v1=((s[i]-'a') - (s[j]-'a'));
                    int v2=((26-(s[i]-'a')) + s[j]-'a');
                    mn=min(v1,v2);
                    s[i]=s[j];
                }
                cost1+=mn;
            }

            cost1++;
            i--;
        }

        //go to right direction
        i=mid;
        while(i < n){
            //find corresponding index
            int j=(n-i-1);
            if(s[i]!=s[j]){
                int mn=INT_MAX;
                if(s[i] < s[j]){
                    //cout<<s[i]<<" "<<s[j]<<endl;
                    int v1=(s[j]-'a')-(s[i]-'a');
                    int v2=((s[i]-'a') + (26-(s[j]-'a')));
                    mn=min(v1,v2);
                    s[j]=s[i];
                }else{
                    int v1=((s[i]-'a') - (s[j]-'a'));
                    int v2=((26-(s[i]-'a')) + s[j]-'a');
                    mn=min(v1,v2);
                    s[j]=s[i];
                }
                cost2+=mn;
            }
            cost2++;
            i++;
        }
        ans=min(cost1,cost2);
        cout<<ans<<endl;

    }else if(pos < mid){

        //first go upto mid

        //come back to oth position


        //go upto last position

    }else if(pos > mid){
        //first go upto mid

        //return upto last pos


        //go upto 0th position 
    }


}

int main(){
   fio;
   int t=1;
   //cin>>t;
   while(t--) solve();
return 0;
}