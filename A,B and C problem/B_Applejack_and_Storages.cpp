#include<bits/stdc++.h>
using namespace std;
 
int fre[100001];
int cnt[100001];

void solve(){
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
     int x;
     cin>>x;
     fre[x]++;
     cnt[fre[x]]++;
 }
 
 int q;
 cin>>q;
 for(int i=0;i<q;i++){
     char op;
     int x;
     cin>>op>>x;
     if(op=='+'){
         fre[x]++;
         cnt[fre[x]]++;
     }else{
         cnt[fre[x]]--;
         fre[x]--;
     }

     if((cnt[8]>0 || cnt[4]>=2) || (cnt[6]>0 && cnt[2]>=2) || (cnt[4]>0 && cnt[2]>=3)){
         cout<<"YES"<<endl;
     }else{
         cout<<"NO"<<endl;
     }
    
}

for(int i=0;i<n;i++){
    cout<<cnt[i]<<" ";
}
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    while(t--)  solve();
    return 0;
}