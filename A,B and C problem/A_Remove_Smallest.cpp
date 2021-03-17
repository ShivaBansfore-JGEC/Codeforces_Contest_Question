#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }

    int grt=0,sml=0;

    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]<=1){
            sml++;
        }else{
            grt++;
        }
    }
    if(grt==0){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;


   
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}