#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++) {
        cin>>arr1[i];
        sum1+=arr1[i];
    }

    for(int i=0;i<n;i++) {
        cin>>arr2[i];
        sum2+=arr2[i];
    }

    if(sum2<=sum1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}