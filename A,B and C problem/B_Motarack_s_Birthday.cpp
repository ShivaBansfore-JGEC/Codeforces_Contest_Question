#include<bits/stdc++.h>
using namespace std;


void solve(){

    int n;
    cin>>n;
    int arr[n];
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
		if(i > 0 && arr[i] == -1 && arr[i - 1] != -1)
			mn = min(mn , arr[i - 1]) , mx = max(mx , arr[i - 1]);
		if(i < n - 1 && arr[i] == - 1 && arr[i + 1] != -1)
			mn = min(mn , arr[i + 1]) , mx = max(mx , arr[i + 1]);
	}

    int res=(mn+mx)/2;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            arr[i]=res;
        }
        if(i){
            ans=max(ans,abs(arr[i]-arr[i-1]));
        }
    }
    cout<<ans<<" "<<res<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}