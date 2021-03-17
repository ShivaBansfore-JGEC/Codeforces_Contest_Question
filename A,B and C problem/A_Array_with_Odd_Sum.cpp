#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    
    if(sum%2!=0){
        cout<<"YES"<<endl;
    }else{
        if(odd==0 or even==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }


}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}