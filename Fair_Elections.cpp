#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    long long john[n],jack[m];
    long long john_sum=0,jack_sum=0;
    for(int i=0;i<n;i++){
        cin>>john[i];
        john_sum+=john[i];
    }

    for(int j=0;j<m;j++){
        cin>>jack[j];
        jack_sum+=jack[j];
    }

    if(john_sum>jack_sum){
        cout<<0<<endl;
    }else{
        sort(john,john+n);
        sort(jack,jack+m,greater<int>());
        int i=0,j=0;
        int ans=0;
        while(i<n && j<m){
            if(john_sum>jack_sum){
                break;
            }
            john_sum-=john[i];
            john_sum+=jack[j];

            jack_sum-=jack[j];
            jack_sum+=john[j];
            ans++;
            i++;
            j++;
        }
        if(john_sum<=jack_sum){
            cout<<-1<<endl;
            return;
        }
        cout<<ans<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}