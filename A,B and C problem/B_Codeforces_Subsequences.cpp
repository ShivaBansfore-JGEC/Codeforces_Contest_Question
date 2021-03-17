#include<bits/stdc++.h>
using namespace std;

long long arr[11];
string s="codeforces";
bool is_valid(long long k){
    long long ans=1;
    for(int i=1;i<=10;i++){
        ans*=arr[i];
        if(ans>=k) return true;
    }
    return false;

}
void solve(){
    long long k;
    cin>>k;
    for(int i=1;i<=10;i++){
        arr[i]=1;
    }

    if(k>1){
        int i=0;
        while(1){
            
            i++;
            if(i>10) i=1;

            arr[i]++;
            if(is_valid(k)){
                break;
            }
        }
    }

    for(int i=1;i<=10;i++){
        while(arr[i]--) cout<<s[i-1];
    }
    
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    while(t--) solve();

    return 0;
}