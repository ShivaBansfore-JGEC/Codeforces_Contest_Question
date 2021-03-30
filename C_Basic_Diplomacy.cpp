#include<bits/stdc++.h>
using namespace std;

struct  seg
{
    long long pos;
    vector<long long> a;
};


bool compare(seg aa,seg bb){
    return aa.a.size()<bb.a.size();
}

void solve(){
   long long n,m;
   cin>>n>>m;
   int id=0;
   vector<seg> ans;
   for(int i=0;i<m;i++){
       int k;
       cin>>k;
       vector<long long> arr(k);
       for(int j=0;j<k;j++){
           cin>>arr[j];
       }

       seg s;
       s.a=arr;
       s.pos=i;
       ans.push_back(s);
   }

   sort(ans.begin(),ans.end(),compare);
    map<long long,long long> mp;
    vector<long long> res(m);
    for(int i=0;i<m;i++) res[i]=-1;
   for(seg s:ans){
       int mn=INT_MAX,val;
       for(int i=0;i<s.a.size();i++){
           if(mp[s.a[i]]<m/2){
               if(mp[s.a[i]]<mn){
                   mn=mp[s.a[i]];
                   val=s.a[i];
               }
           }
       }

       if(mn!=INT_MAX){
           res[s.pos]=val;
           mp[val]++;
       }

   }

   for(int i=0;i<m;i++){
       if(res[i]==-1){
           cout<<"NO"<<endl;
           return;
       }
   }

    cout<<"YES"<<endl;
    for(int u:res) cout<<u<<" ";
    cout<<endl;



}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}