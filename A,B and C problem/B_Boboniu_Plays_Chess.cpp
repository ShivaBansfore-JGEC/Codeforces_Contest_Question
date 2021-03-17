#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int cnt=0;
    while(cnt<(n*m)){
        cout<<x<<" "<<y;
        cnt++;
        while(x>1){
            cout<<x-1<<" "<<y-1<<endl;
            x--;
            cnt++;
        }
        while(y<m){
            cout<<x<<" "<<y-1<<endl;
            y++;
            cnt++;
        }

    }

}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}