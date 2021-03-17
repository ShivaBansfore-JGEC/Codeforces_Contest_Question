#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
  set<string> s;
  for (int i = 0; i < n; i++) {
    string t;
    cin >> t;
    s.insert(t);
  }
  
    string res,center;
    for(auto i:s){
        string j=i;
        reverse(j.begin(),j.end());
        if(i==j){
            center=i;
        }

        if(s.count(j) && i<j){
            res+=i;
        }
    }

    string temp=res;
    reverse(temp.begin(),temp.end());
    res=res+center+temp;
    cout<<res.length()<<endl;
    cout<<res<<endl;

  return 0;
}