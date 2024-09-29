#include <iostream>

using namespace std;


int main() {
	int n;
	cin >> n;

	if (n == 1) {
		cout << 0 << "\n";
		return 0;
	}

	int removed = 0;
	char previous = 'N';
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;

		if (c == previous) {
			removed++;
		}

		previous = c;
	}
	cout << removed << "\n";
	return 0;
}
