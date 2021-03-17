#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans2=*max_element(arr,arr+n)+m;
    for(int i=0;i<m;i++){
        int pos=-1;
        for(int j=0;j<n;j++){
            if(pos==-1 || arr[j]<arr[pos]){
                pos=j;
            }
        }

        assert(pos!=-1);
        arr[pos]++;
    }

    int ans1=*max_element(arr,arr+n);
    cout<<ans1<<" "<<ans2<<endl;

}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)  solve();
    return 0;
}