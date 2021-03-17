#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
}
void solve(){
    
    int n;
    cin>>n;
    int arr[n];
    int mx1=0;
    int mn1=INT_MAX;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        mx1=(max(mx1,arr[i]));
        mn1=min(mn1,arr[i]);
    }
    sort(arr,arr+n);
    int mx=0;
    int a=-1,b=-1;
    for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(arr[i]%arr[j]){
                if(mx<arr[j]){
                    mx=arr[i];
                    a=arr[j];
                    b=arr[i];
                }
                break;
            }else{
                if(mx<gcd(arr[j],arr[i])){
                    mx=arr[i];
                    a=arr[j];
                    b=arr[i];
                }
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==a || arr[i]==b){
            cnt++;
        }
    }
    if(mx1==1){
        cout<<-1<<endl;
    }else{
        cout<<n-cnt<<endl;
    }

}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}