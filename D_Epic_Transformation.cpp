#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   long long arr[n];
   map<long,long> mp;
   set<int> st;
   for(int i=0;i<n;i++){
       cin>>arr[i];
       mp[arr[i]]++;
       st.insert(arr[i]);
   }
    long long sum=0;
   for(int u:st){
       sum+=mp[u];
   }

   

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}