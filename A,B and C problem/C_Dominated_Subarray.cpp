#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
void solve(){

    int n;
    cin>>n;
    int arr[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mp[arr[0]]++;
    int last=0;
    int maxi=1;
    int ans=INT_MAX;
    if(n==1){
        cout<<-1<<endl;
    }else{
        for(int i=1;i<n;i++){
            mp[arr[i]]++;
            if(mp[arr[i]]>maxi){
                while(arr[last]!=arr[i]){
                    mp[arr[last]]--;
                    last++;
                }
            ans=min(ans,i-last+1);
            mp[arr[last]]--;
            last++;
            maxi=mp[arr[last]];
            }
            maxi=max(maxi,mp[arr[i]]);
        }
        if(ans==INT_MAX){
            cout<<-1<<endl;
        }else{
            cout<<ans<<endl;
        }

    }
 
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}