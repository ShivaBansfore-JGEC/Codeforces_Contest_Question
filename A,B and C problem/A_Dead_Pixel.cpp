#include<bits/stdc++.h>
using namespace std;


void solve(){
 int a,b,r,c;
 cin>>b>>a>>c>>r;
int ans=max(((r)*b),((a-(r+1))*b));
int ans1=max((c*a),((b-(c+1))*a));
cout<<max(ans1,ans)<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}