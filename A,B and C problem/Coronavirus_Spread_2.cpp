#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 

void solve(){

    int n;
    cin>>n;
    int mn=INT_MAX;
    int mx=INT_MIN;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int i=0;
    while(i<n){
        int t=0;
        int mn1=INT_MAX;
        int mx1=INT_MAX;
        while(t<=n){
            int x=i+1+(arr[i]*t);
            int cnt=1;
            for(int j=0;j<n;j++){
                int pos=j+1+(arr[j]*t);
                if(i!=j){
                    if(pos==x){
                        cnt++;
                    }
                }

            }
            mn1=min(mn1,cnt);
            mx1=max(mx1,cnt);

            t++;
        }

        mn=min(mn,mn1);
        mx=max(mx1,mx);
        i++;
    }

    cout<<mn<<" "<<mx<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}