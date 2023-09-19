#include <iostream>
#define ll long long
using namespace std;
int main () {
	ll n, prev = 0 , moves = 0;
	cin >> n;
	n--;
	do {
		ll x;
		cin >> x;
		if (prev > x)
			moves += (prev - x);
		else
			prev = x;
	}
	while (n--);

	cout << moves << '\n';
	return 0;
}
