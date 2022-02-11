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
		int n = (int) s.size();
		int zeroes = 0;
		int ones = 0;
		int ans1 = INT_MIN;
		int ans2 = INT_MIN;
		for (int i = 0; i < n; i++) {
			zeroes += (s[i] == '0');
			ones += (s[i] == '1');
			if (zeroes < ones) { // maximum possible zeroes that can be removed
				ans1 = max(ans1, zeroes);
			}
			if (ones < zeroes) { // maximum possible ones that can be removed
				ans2 = max(ans2, ones);
			}
		}
		cout << max(ans1, ans2) << '\n';
	}
	return 0;
}
