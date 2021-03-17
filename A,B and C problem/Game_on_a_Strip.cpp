#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int count_zero=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            count_zero++;
        }
    }
    int i=0;
    vector<int> z;
    while(i<n){
        if(arr[i]==0){
            int conti_zero=0;
            while(arr[i]==0){
                conti_zero++;
                i++;
            }
            z.push_back(conti_zero);
        }
        i++;
    }
    sort(z.begin(),z.end(),greater<int>());
    //for(int i=0;i<z.size();i++) cout<<z[i]<<" ";
    if(z.size()==0){
        cout<<"No"<<endl;
    }else if(z.size()==1){
        if(z[0]&1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        return;
    }else{
        if(z[0]%2==0){
            cout<<"No"<<endl;
            return;
        }

        int v=(z[0]+1)/2;
        if(v<=z[1]){
            cout<<"No"<<endl;
            return;
        }else{
            cout<<"Yes"<<endl;
        }
    }

}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}