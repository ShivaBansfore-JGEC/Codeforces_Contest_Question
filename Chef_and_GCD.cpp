// Author : Shiva Bansfore
// College : Jalpaiguri Government Engineering College
// Address : Siliguri,West Bengal

#include<bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)



void solve(){
    int x,y;
    cin>>x>>y;

    if(__gcd(x,y) > 1){
        cout<<0<<endl;
    }else if(__gcd(x+1,y) >1 || __gcd(x,y+1)>1){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }





}

int main(){
   fio;
   int t=1;
   cin>>t;
   while(t--) solve();
return 0;
}