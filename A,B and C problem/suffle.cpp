#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n,x,m,l,r;
    cin>>n>>x>>m;
    int cnt=0;
    while(m--){
        cin>>l>>r;
        if(l<=x and r>=x){
            cnt+=(r-(l-1));
        }

    }
    cout<<cnt<<endl;


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}