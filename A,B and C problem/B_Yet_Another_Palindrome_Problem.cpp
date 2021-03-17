#include<bits/stdc++.h>
#define ll long long 
using namespace std;


void solve(){
    int fre[50001]={0};
    int n;
    cin>>n;
    set<int> s;
    vector<int> arr(n);
    if(n<3){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<n;i++) fre[arr[i]]=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }

    if(s.size()==1 and n>=3){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<n;i++) fre[arr[i]]++;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,fre[arr[i]]);
    }
    if(mx>=3){
        cout<<"YES"<<endl;
        return;
    }

    for(int i=0;i<n;i++){
        int j=n-1;
        int r=-1;
        while(j>=0){
            if(arr[i]==arr[j]){
                r=j;
                break;
            }
            j--;
        }
        if(r!=-1){
            for(int k=i+1;k<r;k++){
                if(arr[k]!=arr[i]){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;

}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}