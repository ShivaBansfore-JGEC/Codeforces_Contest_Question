#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n,m;
   cin>>n>>m;
   map<int,int> mp;
   vector<int> ans(m);
   int id=0;
   set<int> st;
   for(int i=0;i<m;i++){
       int k;
       cin>>k;
       int arr[k];
        int mn=INT_MAX;
        int y=-1;
       for(int j=0;j<k;j++){
           cin>>arr[j];
            if(mp[arr[j]]<mn){
               mn=mp[arr[j]];
               y=arr[j];
           }
           st.insert(arr[i]);
       }
       if((mn+mp[y])<=(m/2)){
           mp[y]++;
           ans[id]=y;
           id++;
       }else{
           for(int u:st){
               if(mp[u]+1<=(m/2)){
                   
               }
           }
       }
   }
   cout<<"YES"<<endl;
   for(int u:ans) cout<<u<<" ";
   cout<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}