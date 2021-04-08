#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int> a;
    long long tot=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        a.push_back(arr[i]);
        tot+=arr[i];
    }

    sort(a.begin(),a.end());
    int first_max=a[a.size()-1],second_max=a[a.size()-2];


    vector<int> ans;

    for(int i=0;i<n;i++){
        if(arr[i]==first_max){
            long long val=tot;
            val-=arr[i];
            val-=second_max;
            if(val==second_max){
                ans.push_back(i+1);
            }

        }else{
            long long val=tot;
            val-=arr[i];
            val-=first_max;
            if(val==first_max){
                ans.push_back(i+1);
            }
        }
    }


    cout<<ans.size()<<endl;
    for(int u:ans){
        cout<<u<<" ";
    }

    cout<<endl;


    return 0;
}