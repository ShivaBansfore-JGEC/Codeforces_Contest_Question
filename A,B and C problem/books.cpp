#include<bits/stdc++.h>
using namespace std;
vector<long long> arr;


void solve(){

    int n,t;
    cin>>n>>t;
    arr.resize(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0,j=0;
    long long winsum=0;
    int mx_bk=0;

    while(i<n and j<n){
        winsum+=arr[j];
        j++;
        if(winsum>t){
            winsum-=arr[i];
            i++;
        }
        if(mx_bk<(j-i)){
            mx_bk=(j-i);
        }

    }
    cout<<mx_bk<<endl;
 
}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    solve();
    

    return 0;
}