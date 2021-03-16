#include<bits/stdc++.h>
#define ll long long
using  namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    unordered_map<int,pair<int,int>> mp;
    for(int i=0;i<min(n,4000);i++){
        for(int j=i+1;j<min(n,4000);j++){
            int x=arr[i]+arr[j];
            if(mp.find(x)!=mp.end()){
                int a=mp[x].first;
                int b=mp[x].second;
                if(a==i || a==j || b==i ||b==j) continue;
                cout<<"YES"<<endl;
                cout<<a+1<<" "<<b+1<<" "<<i+1<<" "<<j+1<<endl;
                return 0;
            }
            mp[x]={i,j};
        }
    }

    cout<<"NO"<<endl;

    

    return 0;
}