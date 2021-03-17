#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int l=0;int r=n-1;
    vector<int> a;
    while(l<=r){
        if(l==r){
            a.push_back(arr[l]);
        }
        else{
            a.push_back(arr[r]);
            a.push_back(arr[l]);
        }
        l++;
        r--;
    }
    reverse(a.begin(),a.end());
    for(int u:a) cout<<u<<" ";
    cout<<endl;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}