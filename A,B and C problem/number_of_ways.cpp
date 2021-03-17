#include<bits/stdc++.h>
using namespace std;
vector<int> arr;


int nck(int n, int k) 
{ 
    
    int C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;  // nC0 is 1 
  
    for (int i = 1; i <= n; i++) 
    { 
        // Compute next row of pascal triangle using 
        // the previous row 
        for (int j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
}

void solve(){

    int n;
    cin>>n;
    arr.resize(n,0);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    
    if(sum%3!=0){
        cout<<0<<endl;
    }else
    {
        long long target=sum/3;
        long long two_third=2*target;
        long long s=0;
        long long ans=0;
        long long one_third=0;
        for(int i=0;i<n-1;i++){
            s+=arr[i];
            if(s==two_third)
             ans+=one_third;

            if(s==target){
                one_third++;
            }
            
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

    solve();
    

    return 0;
}