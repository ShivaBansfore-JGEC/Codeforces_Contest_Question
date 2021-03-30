#include<bits/stdc++.h>
using namespace std;

void solve(){
   long long x,r,m;
   cin>>x>>r>>m;

    if(r>m){
        cout<<"NO"<<endl;
        return;
    }
   long long time_requi=(r*60);
   long long tot_time=(m*60);

   long long ans=x+abs(tot_time-time_requi);
   if(ans>=time_requi){
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }


}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}