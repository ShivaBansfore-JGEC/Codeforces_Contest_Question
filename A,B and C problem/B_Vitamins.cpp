#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<pair<int,string>> v;

int func(int pos,int n,map<char,int> m1){
    if(pos>=n){
        return 0;
    }
    int min=INT_MAX;
    for(int i=pos;i<n;i++){
        string s=v[i].second;
        for(char u:s) m1[u]++;
        func(i,n,m1);
    }
}

void solve(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        string s;
        cin>>p>>s;
        v.push_back({p,s});
    }

}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}