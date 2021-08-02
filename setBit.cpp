// Author : Shiva Bansfore
// College : Jalpaiguri Government Engineering College
// Address : Siliguri,West Bengal

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define all(a) a.begin(), a.end()
#define pie 3.1415926535898
#define mod (ll)(998244353)
#define MOD (int)1e9 + 7
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define frr(i, a, b) for (ll i = b - 1; i >= a; i--)
#define vi vector<int>
#define vii vector<vector<>>
#define mp map<ll, ll>
#define inf (ll)(1e18)
#define inff INT_MIN
#define pb emplace_back
#define sz(s) s.size()
#define ff first
#define ss second
#define bits(n) __builtin_popcount(n)
#define rr return 0
#define ini(a, i) memset(a, i, sizeof(a))
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

const int n = 100005;
vector<bool> prime(100005, true);

void SieveOfEratosthenes()
{

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

unsigned countBits(unsigned int number)
{     
      // log function in base 2
      // take only integer part
      return (int)log2(number)+1;
}

void solve()
{
    int l, r;
    cin >> l >> r;

    int sp_bit = 0;
    
    for(int i=l;i<=r;i++){
        int tot_bits=countBits(i);
        for(int j=1;j<=tot_bits;j+=1){
            if(prime[j]==true){
                if(i&(1<<(j-1))){
                    sp_bit++;
                }
            }
        }

    }

    cout<<sp_bit<<endl;

    
}



int main()
{
    prime[0]=false;
    prime[1]=false;
    SieveOfEratosthenes();

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
