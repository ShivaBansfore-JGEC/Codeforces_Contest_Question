#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int mx=0;
    int mx_idx=-1;
    for(int i=0;i<n;i++){
        if(mx<arr[i]){
            mx=arr[i];
            mx_idx=i;
        }
    }
    int flag=1;
    for(int i=0;i<mx_idx-1;i++){
        if(arr[i]>=arr[i+1]){
            flag=0;
            break;
        }
    }

    for(int i=mx_idx+1;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            flag=0;
            break;
        }
    }

    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}