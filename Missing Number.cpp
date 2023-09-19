#include <iostream>
#define ll long long
using namespace std;
int main () {
	ll n;
	cin >> n;
	ll arr[n + 1] {};
	for (ll i = 0; i < n - 1; i++) {
		ll a;
		cin >> a;
		arr[a] = 1;
	}

	for (ll i = 1; i <= n; i++) {
		if (arr[i] == 0) {
			cout << i << '\n';
			break;
		}
	}
	return 0;
}
