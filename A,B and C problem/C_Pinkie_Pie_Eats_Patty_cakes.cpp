#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> mp;
    int mx=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        mx=max(mx,mp[arr[i]]);
    }
    int count=0;
    for(auto i:mp){
        if(i.second==mx){
            count++;
        }
    }

    count--;
    cout<<(n-mx-count)/(mx-1)<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}