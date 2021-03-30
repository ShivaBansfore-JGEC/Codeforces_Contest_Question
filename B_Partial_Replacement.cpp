#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n,k;
   cin>>n>>k;

   string s;
   cin>>s;
   long long ans=0;
   int first=0;

   for(int i=0;i<n;i++){
       if(s[i]=='*'){
           first=i;
           break;
       }
   }
    int last=n-1;
   for(int i=n-1;i>=0;i--){
       if(s[i]=='*'){
           last=i;
           break;
       }
   }

   for(int i=0;i<n;i++){
       if(s[i]=='*'){
           s[i]='x';
           break;
       }
   }
   for(int i=n-1;i>=0;i--){
       if(s[i]=='*'){
           s[i]='x';
           break;
       }
   }

   if((last-first)<=k && first!=last){
       cout<<"2"<<endl;
       return;
   }
   int id=-1,d=0;
   for(int i=first+1;i<last;i++){
       d++;
       if(s[i]=='*'){
           id=i;
       }

       if(d>=k){
           if(id!=-1){
               s[id]='x';
               d=0;
           }
       }
   }

for(char u:s){
    if(u=='x'){
        ans++;
    }
}
//cout<<s<<endl;

cout<<ans<<endl;


}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}