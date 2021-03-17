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

    int i=0,j=0;
    long long s=0;
    long long choice=0;

    while (i<n && j <n){
        choice=arr[i];
        if(choice>=0){
            while(arr[j]>=0 and j<n){
                if(choice<arr[j]){
                    choice=arr[j];
                }
                j++;
            }
            i=j-1;

        }else{
            while(arr[j]<0 and j<n){
                if(abs(choice)>abs(arr[j])){
                    choice=arr[j];
                }
                j++;
            }
            i=j-1;
        }
        s+=choice;
        i+=1;
    }
    cout<<s<<endl;

}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    int t;
    cin>>t;
    while(t--)
    solve();
    

    return 0;
}