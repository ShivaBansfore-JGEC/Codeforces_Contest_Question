#include <bits/stdc++.h>
using namespace std;
 

void printsubset(long long n,int k)
{
  
    int count = 0, x = 0;
   
 
    vector<long long> vec;
   
    while (n) {
        x = n & 1;
       

        if (x) {
            vec.push_back(pow(k, count));
        }
       
        n = n >> 1;
     
        count++;
    }
   
    // printing the values os elements
    cout<<vec.size()<<endl;
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout<<endl;
}
 
// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--){
        int k = 3;
        long long n;
        cin>>n;
        printsubset(n, k);
    }
}