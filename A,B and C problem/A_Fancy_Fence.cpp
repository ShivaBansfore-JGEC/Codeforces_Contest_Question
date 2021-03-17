#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
 int fre[4];
void solve(){

    float a;
    cin>>a;
    float ans=(360/(180-a));
    if(ans==(int)ans){
        cout<<"YES"<<endl;
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