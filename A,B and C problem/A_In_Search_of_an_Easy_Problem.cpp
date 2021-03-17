#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
 
void solve(){
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
            cout<<"HARD"<<endl;
            return;
        }
    }
    cout<<"EASY"<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}