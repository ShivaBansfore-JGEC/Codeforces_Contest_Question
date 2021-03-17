#include<bits/stdc++.h>
#define ll long long 
using namespace std;



void solve(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];
    if(arr[0]>arr[n-1]){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}