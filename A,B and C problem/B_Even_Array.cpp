#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin>>n;
    vector<int> a(n);
    int odd=0,even=0;
    int misplaced=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) even++;
        else odd++;

        if(a[i]%2!=i%2) misplaced++;
    }
    if(n%2==0){
        if(odd!=n/2 || even!=n/2) {
            cout<<-1<<endl;
            return;
        }
    }else{
        if(even!=n/2+1 or odd!=(n/2)){
            cout<<-1<<endl;
            return;
        }
    }

    cout<<misplaced/2<<endl;
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}