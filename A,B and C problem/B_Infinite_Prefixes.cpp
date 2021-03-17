#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,x;
    string s;
    cin>>n>>x>>s;

    int cnt0=(int) count(s.begin(),s.end(),'0');
    int total=cnt0-(n-cnt0);
    int bal=0;
    bool infans=false;
    int ans=0;
    for(int i=0;i<n;i++){

        if(total==0){
            if(bal==x) infans=true;
        }else if(abs(x-bal)%total==0){
            if((x-bal)/total >=0){
                ans++;
            }
        }

        if(s[i]=='0')
        bal++;
        else bal--;
    }

    if(infans) ans=-1;
    cout<<ans<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}