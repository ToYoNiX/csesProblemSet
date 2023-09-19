#include <iostream>
using namespace std;
int main () {
	long long n;
	cin >> n;

	if (n == 3 || n == 2){
		cout << "NO SOLUTION\n";
		return 0;
	}

	for (int i = n - 1; i > 0; i -= 2) {
		cout << i << ' ';
	}
	
	for (int i = n; i > 0; i -= 2) {
		cout << i << ' ';
	}

	return 0;
}
