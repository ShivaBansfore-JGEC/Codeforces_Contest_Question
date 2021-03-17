#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,x;
    cin>>n>>x;

    int sum=0,l=-1,r;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]%x){
            l=1;
        }
    }
    if(sum%x){
        cout<<n<<endl;
    }else if(l==-1){
        cout<<-1<<endl;
    }else{

        int i=0,j=n-1;
        int left=-1,right=-1;
        while(i<=j){
            if(arr[i]%x){
                if(left==-1)
                left=i;
            }
            if(arr[j]%x){
                if(right==-1)
                right=j;
            }
            i++;
            j--;

        }
        left=max(left,n-(left+1));
        right=max(right,n-right);
        cout<<max(left,right)<<endl;

    }

    
}
    

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
        return 0;
    }