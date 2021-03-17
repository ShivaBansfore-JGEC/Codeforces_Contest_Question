#include<bits/stdc++.h>
using namespace std;
                   
int n;
vector<long long> arr;
bool pre(){

    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<=0) return 0;
    }

    sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=arr[i];
        if(sum<=0) return 0;
    }


    return 1;
}
void solve(){
    cin>>n;
    arr.resize(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];

    if(pre()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}