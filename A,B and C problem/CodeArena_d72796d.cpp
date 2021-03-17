#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    int n,m;
    cin>>n>>m;
    int total_seated=0;
    int cnt=0;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        total_seated+=((a-b));
        if(total_seated>=m){
            cnt++;
        }
    }
    cout<<cnt<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}