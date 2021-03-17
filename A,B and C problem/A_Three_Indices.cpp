#include<bits/stdc++.h>
using namespace std;


void solve(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x=-1,y=-1,z=-2;
    for(int i=1;i<n;i++){
        x=i+1;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]<arr[i]){
                y=j+1;
                break;
            }
        }

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i]){
                z=j+1;
                break;
            }
        }
        if(x>=0 && y>=0 && z>=0) break;
        else{
            x=-1;
            z=-1;
            y=-1;
        }

    }
    if(x>=0 && y>=0-1 && z>=0){
        cout<<"YES"<<endl;
        cout<<y<<" "<<x<<" "<<z<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
        return 0;
}