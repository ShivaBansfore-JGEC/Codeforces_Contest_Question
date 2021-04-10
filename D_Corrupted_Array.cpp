#include<bits/stdc++.h>
using namespace std;

void solve(){
     int n;
    cin>>n;
    vector<long long> arr(n+2);

    int flag=0;
    long long sum=0;
    for(int i=0;i<n+2;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    sort(arr.begin(),arr.end());
    
    long long a=arr[n],b=arr[n+1];
    
    for(int i=0;i<n+2;i++){
        long long asum=sum;
        //check for a 
        if((asum-a)-arr[i]==a && i!=n){
            arr[i]=-1;
            arr[n]=-1;
            flag=1;
            break;
        }
        long long bsum=sum;

        if(((bsum-b)-arr[i])==b && i!=n+1){
            arr[i]=-1;
            arr[n+1]=-1;
            flag=1;
            break;
        }
    }

    vector<int> ans;
   for(int i=0;i<n+2;i++){
       if(arr[i]!=-1){
           ans.push_back(arr[i]);
       }
   }
    
    if(flag==0){
        cout<<-1<<endl;
    }else{
        for(int v:ans) cout<<v<<" ";
        cout<<endl;
    }

}

int main(){
   int t;
   cin>>t;
   while(t--) solve();
    return 0;
}