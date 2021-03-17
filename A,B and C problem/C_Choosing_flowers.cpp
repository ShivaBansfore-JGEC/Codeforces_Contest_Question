#include<bits/stdc++.h>
#define ll long long 
using namespace std;

struct st{
    int a,b,avg;
};

bool compare(st item1,st item2){
    if(item1.avg>item2.avg) return true;
    else return false;
    
}

void solve(){
    int n,m;
    cin>>n>>m;
    struct st s;
    vector<st> ar;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        s.a=x;
        s.b=y;
        s.avg=(x+y)/2;
        ar.push_back(s);
    }

    sort(ar.begin(),ar.end(),compare);
    int ans=0;
    for(int i=0;i<ar.size();i++){
    }

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}