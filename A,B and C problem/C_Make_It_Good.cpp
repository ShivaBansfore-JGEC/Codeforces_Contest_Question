#include<bits/stdc++.h>
#define ll long long 
using namespace std;



void solve(){

    int  n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //start from the last element 

    int i=n-1;
    bool flag=true;
    int ans=0;
    while(i>0){
        if(flag==true){
            if(arr[i-1]<arr[i]){
                flag=false;
            }
        }
        if(flag==false){
            if(arr[i-1]>arr[i]){
                ans=i;
                break;
            }
        }

        i--;

    }
    cout<<ans<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}