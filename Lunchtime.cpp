#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long ans[n];
    for(int i=0;i<n;i++){
        int val=arr[i];
        int cnt=0;;
        int j=i+1,k=i-1;

        while(k>=0){
            if(arr[k]>val) break;
            if(arr[k]==val) cnt++;
            k--;
        }
        while(j<n){
            if(arr[j]>val){
                break;
            }

            if(arr[j]==val) cnt++;
            
            j++;
        }
        ans[i]=cnt;
    }
    for(int u:ans){
        cout<<u<<" ";
    }
    cout<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}