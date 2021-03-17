#pragma GCC optimize("Ofast")
 
#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
 
int n, s, k;
vector<int> a;
 

 
void Solve() {
    cin >> n >> s >> k; a.clear(); a.resize(k);
	for (auto &z: a) cin >> z;

	for (int i=0; i<=k; i++) {
		if (s-i >= 1 && find(a.begin(), a.end(), s-i) == a.end()) {cout << i << endl; return;}
		if (s+i <= n && find(a.begin(), a.end(), s+i) == a.end()) {cout << i << endl; return;}
	}
	assert(false); // if reached this line, the solution failed to find a free floor
}
 
int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	int T; cin >> T; while (T--) {Solve();} return 0;
}