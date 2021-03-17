#include<bits/stdc++.h>
using namespace std;


void solve(){
  int n;
  cin>>n;
  int a[n];
  int sum=0;

  for(int i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
  }

  if(n==1){
      if(a[0]%2!=0){
          cout<<"-1"<<endl;
      }else
      {
          cout<<1<<endl;
          cout<<1<<endl;
      }
      
  }else{

      int id=-1;
      for(int i=0;i<n;i++) {
          if(a[i]%2==0){
              id=i+1;
              break;
          }
      }
      if(id!=-1){
          cout<<"1"<<endl;
          cout<<id<<endl;
      }else{
          int i=0;
          int j=n-1;
          while(i<=j){
              if(sum%2==0) break;
              if((sum-a[i])%2==0) i++;break;
              if((sum-a[j])%2==0) j--;break;
              i++;
              j--;
          }
         cout<<j-i+1<<endl;
          for(int k=i;k<=j;k++){
              cout<<k+1<<" ";
          }
      }

  }

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}