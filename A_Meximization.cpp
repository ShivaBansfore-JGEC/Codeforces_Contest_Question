#include<bits/stdc++.h>
#define ll long long
using  namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    vector<int> ans;
    map<int,int> mp;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        if(mp[arr[i]]>1){
            a.push_back(arr[i]);
        }else{
            ans.push_back(arr[i]);
        }
    }

    sort(ans.begin(),ans.end());
    sort(a.begin(),a.end());
    for(int i:a){
        ans.push_back(i);
    }

    for(int u:ans) cout<<u<<" ";
    cout<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}