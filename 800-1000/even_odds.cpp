#include <iostream>

#define ll long long

using namespace std;


int main() {
	ll n, k;
	cin >> n >> k;	

	ll halfway = n / 2;

	if (n % 2 == 0) {
		if (k <= halfway) {
			cout << 1 + (k - 1) * 2 << "\n";
		} else {
			cout << 2 + ((k - halfway) - 1) * 2 << "\n";
		}
	} else {
		// [1, 3, 5, 7, 2, 4, 6]
		if (k <= halfway + 1) {
			cout << 1 + (k - 1) * 2 << "\n";
		} else {
			cout << 2 + ((k - halfway - 1) - 1) * 2 << "\n";
		}	
	}
}	
