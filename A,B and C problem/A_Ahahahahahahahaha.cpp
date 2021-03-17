#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){

    int n;
    cin>>n;
    vector<int> arr(n);
    int one=0;
    int zero=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) one++;
        if(arr[i]==0) zero++;
    }
    if(n==2){
        cout<<1<<endl;
        cout<<0<<endl;
        return;
    }
    cout<<n/2<<endl;
    if(one>=n/2){
        for(int i=0;i<n/2;i++){
            cout<<1<<endl;
        }

    }else if(zero>=n/2){
        for(int i=0;i<n/2;i++){
            cout<<0<<endl;
        }
    }else{
        int i=2;
        int r=n/2;
        if((zero/2)%2==0){
            for(int i=0;i<zero/2;i++){
                cout<<0<<endl;
            }
            r=zero/2;
        }else {
            for(int i=0;i<zero/2-1;i++){
                cout<<0<<endl;
            }
            zero=n/2-1;
        }

        for(int i=0;i<n-r;i++) cout<<1<<endl;
    
    }


    
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}