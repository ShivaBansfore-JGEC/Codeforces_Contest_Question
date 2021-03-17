#include<bits/stdc++.h>
using namespace std;


void solve(){
    float n;
    cin>>n;
    float sum=0;
    while(n!=0){
        sum+=(float(1)/float(n));
        n--;
    }
    cout<<sum<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    while(t--)  solve();
    return 0;
}