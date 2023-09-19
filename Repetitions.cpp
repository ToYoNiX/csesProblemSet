#include <iostream>
using namespace std;
int main () {
	string s;
	cin >> s;
	long long l = s.length(), counter = 1, ans = 0;
	for (long long i = 1; i < l; i++) {
		if (s[i] != s[i - 1]) {
			if (ans < counter)
				ans = counter;
			counter = 1;
		}
		else
			counter++;
	}

	if (ans < counter)
		ans = counter;

	cout << ans << '\n';
	return 0;
}
