#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left_most=-1;
    int right_most=-1;
    int i=0,j=n-1;
    while(i<n){
        if(arr[i]==1){
            left_most=i;
            break;
        }
        i++;
    }
    while(j>=0){
        if(arr[j]==1){
            right_most=j;
            break;
        }
        j--;
    }

    int ans=0;
    while(left_most<right_most){
        if(arr[left_most]==0){
            ans++;
        }
        left_most++;
    }
    cout<<ans<<endl;
    
    
}
int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}