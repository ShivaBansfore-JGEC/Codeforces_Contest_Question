#include<bits/stdc++.h>
using namespace std;


void solve(){
    string a,b,c;
    cin>>a>>b>>c;
    int flag=1;
    for(int i=0;i<a.size();i++){
        if(c[i]==a[i] || c[i]==b[i]){
            continue;
        }else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}