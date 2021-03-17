#include<bits/stdc++.h>
using namespace std;
vector<int> arr;


void solve(){

    int n,t;
    cin>>n>>t;
    arr.resize(n,0);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    if(sum%t!=0){
        cout<<n<<endl;
    }
    else{
    int i=0,j=n-1;
    int ans=-1;
    while(i<=j){
        cout<<sum<<endl;
        if(sum%t!=0){
            ans=j-i+1;
            break;
        }
        cout<<sum<<endl;
        int s1=sum-arr[i];
        cout<<s1<<endl;
        if(s1%t!=0){
            i++;
            ans=j-i+1;
            break;
        }
        int s2=sum-arr[j];
        if(s2%t!=0){
            j--;
            ans=j-i+1;
            break;
        }

        sum-=arr[i];
        sum-=arr[j];
        i++;
        j--;
        }
        cout<<ans<<endl;
    }

 
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
    //while(t--)
    //solve();
    cout<<"hi"<<endl;
    
    return 0;
}