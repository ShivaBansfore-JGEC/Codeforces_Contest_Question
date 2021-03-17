#include<bits/stdc++.h>
using namespace std;
vector<long long> arr;


void solve(){

    int n;
    cin>>n;
    arr.resize(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int i=0,j=n-1;
    int sreeja=0,dima=0;
    bool flag=0;
    while(i<=j){
        if(flag==0){
            if(arr[i]>=arr[j]){
                sreeja+=arr[i];
                i++;
                flag=1;
                continue;
            }else{
                sreeja+=arr[j];
                j--;
                flag=1;
                continue;
            }
        }else{
            if(arr[i]>=arr[j]){
                dima+=arr[i];
                i++;
                flag=0;
                continue;
            }else{
                dima+=arr[j];
                j--;
                flag=0;
                continue;
            }
        }
    }
    cout<<sreeja<<" "<<dima<<endl;
 
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