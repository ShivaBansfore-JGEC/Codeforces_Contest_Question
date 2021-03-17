#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}