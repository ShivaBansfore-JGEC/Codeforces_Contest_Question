// Author : Shiva Bansfore
// College : Jalpaiguri Government Engineering College
// Address : Siliguri,West Bengal

#include<bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}


void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mpp[a[i]]++;
    }

    int ans=0;
    int flag=0;
    for(auto v:mpp){
        if(flag==0 && v.first==2){
            ans+=1;
            flag=1;
        }
        if(flag==1 && v.first==2){
            continue;
        }

        if(v.first%2==0){
            int lmt=2*((v.first/2)-1)+1;
            if(v.second>=lmt){
                ans+=lmt;
            }else{
                ans+=v.second;
            }

        }else{
            int lmt=2*(v.first/2);
            if(v.second>=lmt){
                ans+=lmt;
            }else{
                ans+=v.second;
            }

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