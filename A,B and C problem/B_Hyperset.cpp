#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	set<string> ss;
	vector<string> s(n);
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		ss.insert(s[i]);
	}
	int ans=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			string w;
			for(int z=0;z<k;z++)
			{
				if(s[i][z]==s[j][z])
					w+=s[i][z];
				else
					w+=(char)('S'+'E'+'T'-s[i][z]-s[j][z]);
			}
			if(ss.find(w)!=ss.end()){
                ans++;
            }
				
		}
	}
	cout<<ans/3;
	return 0;
}