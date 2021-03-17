#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    if(arr[n-1]>=arr[n-2]+arr[n-3]){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        swap(arr[n-1],arr[n-2]);
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    }
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}