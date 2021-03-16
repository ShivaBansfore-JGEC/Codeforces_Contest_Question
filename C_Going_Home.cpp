#include<bits/stdc++.h>
using  namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]].push_back(i+1);
    }

    for(int a:arr){
        if(mp[a].size()>=4){
            for(int i=0;i<4;i++){
                cout<<mp[a][i]<<" ";
            }
            cout<<endl;
            return 0;
        }
    }

    

    return 0;
}