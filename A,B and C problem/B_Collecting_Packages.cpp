#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    return a<b;
}
vector<pair<int,int>> a;
void solve(){
    string res="";
    int x=0,y=0;
    for(int i=0;i<a.size();i++){
        if(x>a[i].first || y>a[i].second){
            cout<<"NO"<<endl;
            return;
        }
        while(x<a[i].first){
            res+="R";
            x++;
        }
        x=a[i].first;

        while(y<a[i].second){
            res+="U";
            y++;
        }

        y=a[i].second;
    }
    cout<<"YES"<<endl;
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            a.push_back({x,y});
        }
        sort(a.begin(),a.end());
        solve();
        a.clear();


    };
    return 0;
}