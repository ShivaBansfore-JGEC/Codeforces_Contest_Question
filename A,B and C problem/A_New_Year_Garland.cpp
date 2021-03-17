#include<bits/stdc++.h>
using namespace std;

void solve(){
    int r,g,b;
    cin>>r>>g>>b;
    bool flag=1;
    if(r>(g+b+1)) flag=0;
    if(g>(r+b+1)) flag=0;
    if(b>(r+g+1)) flag=0;

    if(flag==1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}