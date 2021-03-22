#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;

    int arr[n];
    int tot=0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%m==0){
            if(tot==0){
                tot++;
            }
        }else{
            int x=arr[i]%m;
            mp[x]++;
        }
    }
    map<int,int> vis;
    for(auto i:mp){
        int a=i.first;
        int b=i.second;
        //cout<<a<<" "<<b<<endl;
        if(vis[a]==0){
            if(a==(m-a) && b>0){
                vis[m-a]++;
                tot++;
            }else if(b>0 && mp[(m-a)]==0){
                vis[m-a]++;
                tot++;
            }else if(b>0 && mp[m-a]>0){
                vis[m-a]++;
                if(abs(b-mp[m-a])<=1){
                    tot++;
                }else{
                    tot+=2;
                }
            }

        }

        }
    cout<<tot<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}