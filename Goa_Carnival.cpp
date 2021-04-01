#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,t;
    cin>>n>>t;
    long long arr[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(t<sum){
        long long ans=0;
        long long tt=t,ss=0,cnt=0;
        for(int i=0;i<n;i++){
            if(tt>=arr[i]){
                ss+=arr[i];
                tt-=arr[i];
                cnt++;
            }
        }

        ans=(t/ss)*cnt;
        long long rem=abs(t-((t/ss)*ss));
    
        for(int i=0;i<n;i++){
            if(rem>=arr[i]){
                rem-=arr[i];
                ans++;
            }
        }
        cout<<ans<<endl;

    }else{
        long long ans=0;
        long long v=t/sum;
        ans=(v*n);
        long long rem=abs(t-(v*sum));

        for(int i=0;i<n;i++){
            if(rem>=arr[i]){
                rem-=arr[i];
                ans++;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}