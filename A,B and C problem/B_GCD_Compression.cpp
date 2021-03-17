#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[2*n];

    vector<int> odd,even;
    vector<pair<int,int>> ans;

    for(int i=1;i<=2*n;i++){
        cin>>arr[i];
        if(arr[i]%2==0) even.push_back(i);
        else odd.push_back(i);
    }

    for(int i=0;i+1<odd.size();i+=2){
        ans.push_back({odd[i],odd[i+1]});
    }

    for(int i=0;i+1<even.size();i+=2){
        ans.push_back({even[i],even[i+1]});
    }
    for(int i=0;i<n-1;i++)
    cout<<ans[i].first<<" "<<ans[i].second<<endl;
    

}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}