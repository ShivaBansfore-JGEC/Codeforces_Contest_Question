#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<2*n;i++)cin>>arr[i];
    sort(arr,arr+(2*n));
    cout<<arr[n]-arr[n-1]<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}