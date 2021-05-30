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

    if(s==0 && n==1){
        cout<<0<<" "<<0<<endl;
        return;
    }

    if(s<1 && n>1){
        cout<<-1<<" "<<-1<<endl;
    }else{
        if(9*n<s){
            cout<<-1<<" ";
        }else{
        vector<int> ans;
        int first=-1;
        int s_copy=s;
        for(int i=1;i<=9;i++){
            if((n-1)*9 >=(s-i)){
                first=i;
                s_copy-=i;
                break;
            }
        }

        int rem=-1;

        for(int i=9;i>=1;i--){
                if(s_copy/i>0){
                    int cnt=s_copy/i;
                    while(ans.size()<(n-1) && cnt > 0){
                        ans.push_back(i);
                        cnt--;
                    }
                    rem=(s_copy-(ans.size()*i));
                    break;
                }    
        }
        if(rem>0){
            if(ans.size()<(n-1)){
                ans.push_back(rem);
            }
        }

        while(ans.size()<n-1){
            ans.push_back(0);
        }
        ans.push_back(first);
        reverse(ans.begin(),ans.end());

        if(ans[0]==0){
            for(int i=0;i<ans.size();i++){
                if(ans[i]>0){
                    swap(ans[0],ans[i]);
                    break;
                }
            }
        }

        for(int u:ans){
            cout<<u;
        }
        cout<<" ";
        }


  
    if(9*n<s){
            cout<<-1<<endl;
        }else{
            vector<int> l;
            int val=0;
            for(int i=9;i>=1;i--){
                if(s/i>0){
                    int cnt=s/i;
                    while(cnt>0){
                        l.push_back(i);
                        cnt--;
                    }
                    if(l.size()<n){
                        int rem=(s-(l.size()*i));
                        if(rem>0){
                            l.push_back(rem);
                        }
                    }

                    break;

                }
            }


            while(l.size()<n){
                l.push_back(0);
            }


            for(int u:l){
                cout<<u;
            }

            cout<<endl;
        }

        }

        

  
 
}
 
int main(){
    fio;
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}