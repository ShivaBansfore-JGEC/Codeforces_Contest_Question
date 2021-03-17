#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){

    int n;
    cin>>n;
    set<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.insert(x);
    }

    int ans=0;
    while(!a.empty()){
        int m=*a.rbegin();
        //cout<<m<<endl;
        a.erase(m);
        if(m%2==0){
            ans++;
            a.insert(m/2);
        }
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