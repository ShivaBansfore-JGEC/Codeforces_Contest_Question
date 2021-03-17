#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int in_rat[n+1];
    for(int i=1;i<=n;i++) cin>>in_rat[i];
    vector<int> v[3000];
    vector<int> mx_rat_month;
    int ans=0;
    for(int i=1;i<=n;i++){
        int rating=in_rat[i];
        int rat=in_rat[i];
        int max_rat=INT_MIN;
        int first_change=-1;
        int mxx_rat_month=-1;
        for(int j=1;j<=m;j++){
            int r;
            cin>>r;
            rating+=r;
            v[j].push_back(rating);

            if(max_rat<rating){
                max_rat=rating;
                mxx_rat_month=j;
            }
        }
        mx_rat_month.push_back(mxx_rat_month);

    }
    vector<int> a;
    vector<int> rankk[3000];
    int r=1;
    for(int i=1;i<=m;i++){
        for(int j=0;j<v[i].size();j++){
            int val=v[i][j];
            int rank=0;
            int id=j;
            int fre[5000]={0};
            for(int k=0;k<v[i].size();k++){
                fre[v[i][k]]++;
            }
            for(int m=1;m<val;m++){
                rank+=fre[m];
            }
            rank++;
            rankk[j+1].push_back(rank);

        }
        for(int i=1;i<=n;i++){
            int id=-1;
            int mn=INT_MAX;
            for(int j=0;j<rankk[i].size();j++){
                if(mn>rankk[i][j]){
                    mn=rankk[i][j];
                    id=j+1;
                }
            }
            if(id!=mx_rat_month[i-1]){
                ans++;
            }
        }
    }
    cout<<ans<<endl;

}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}