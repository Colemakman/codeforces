#include <iostream>
#include <vector>


using namespace std;


// odd = 0, even = 1
int parity(int n) {
	if (n < 3) {
		return 0;
	}
	if (n < 5) {
		return 1;
	}
	if (n % 2 == 0) {
		return 1;
	}
	return 0;
}

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int n, k;
		cin >> n >> k;
		
		if (n == k) {
			switch (parity(n)) {
				case 1:
					cout << "YES" << "\n";
					break;
				case 0:
					cout << "NO" << "\n";
					break;
			}
		} else {
			switch (parity(n) - parity(n - k)) {
				case 0:
					cout << "YES" << "\n";
					break;
				case 1:
					cout << "NO" << "\n";
					break;
			}
		}
	}

	return 0;
}
