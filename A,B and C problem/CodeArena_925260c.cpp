#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){

    int a,b,p;
    cin>>a>>b>>p;
    int ca,cb,cp;
    cin>>ca>>cb>>cp;
    int total;
    cin>>total;
    vector<pair<int,int>> ar;
    ar.push_back({a,ca});
    ar.push_back({b,cb});
    ar.push_back({p,cp});

    sort(ar.begin(),ar.end());
    int frts=0;
    for(int i=0;i<3;i++){
        int price=total/ar[i].first;
        if(price>=ar[i].second){
            total-=(ar[i].first*ar[i].second);
            frts+=ar[i].second;

        }else{
            total-=(price*ar[i].first);
            frts+=price;   
        }
    }
    cout<<frts<<endl;

 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}