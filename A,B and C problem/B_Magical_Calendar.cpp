#include<bits/stdc++.h>
using namespace std;

void solve(){

    long long a,b;
    cin>>a>>b;
    if(a<=b){

        if(a==1){
             cout<<1<<endl;
        }else{
            cout<<(a*(a-1)/2+1)<<endl;
        }
        

    }else{
        if(b==1){
            cout<<1<<endl;
            return;
        }else{
            cout<<(b*(b+1)/2)<<endl;
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