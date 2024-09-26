#include <iostream>


using namespace std;


int main() {
	int n;
	cin >> n;

	long long c;
	while (n--) {
		cin >> c;
		if (c % 2 == 0) {
			cout << c/2 - 1 << "\n";
		} else {
			cout << c/2 << "\n";
		}
	}
}
