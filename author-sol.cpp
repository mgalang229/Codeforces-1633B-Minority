#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int zeroes = count(s.begin(), s.end(), '0');
		int ones = count(s.begin(), s.end(), '1');
		// first arg = the no. of 0s and 1s are equal
		// second arg = the no. of 0s is less than the no. of 1s
		// third arg = the no. of 1s is less than the no. of 0s
		cout << min({((int) s.size() - 1) / 2, zeroes, ones}) << '\n';
	}
	return 0;
}
