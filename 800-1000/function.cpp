#include <iostream>

using namespace std;


int main() {
	// -1 + 2 - 3 + 4 + .. + (-1)^n * n
	// - 1 - 3 - 5 ...
	//   2 + 4 + 6 ...
	//   1 + 1 + 1
	
	long long n;
	cin >> n;

	if (n % 2 == 0) {
		cout << n/2 << "\n";
	} else {
		cout << n/2 - n << "\n";	
	}
}
