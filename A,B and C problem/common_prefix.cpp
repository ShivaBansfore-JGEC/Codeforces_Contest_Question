#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s(200, 'a');
    cout << s << endl;

    for (int i = 0; i < n; ++i)
    {
        int u;
        cin >> u;
        s[u] = s[u] == 'a' ? 'b' : 'a';
        cout << s << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }
    bool f=false;
    if('a'>'b'){
        cout<<" hii "<<endl;
    }
    return 0;
}