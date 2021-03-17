#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int odd=0;
    for(char c:s){
        if((c-'0')&1) odd++;
    }
    if(odd<=1){ cout<<-1<<endl;}
    else{
        int cnt=0;
        for(char c:s){
            if((c-'0')&1){
                cout<<c;cnt++;
            }
            if(cnt==2) break;
        }
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}