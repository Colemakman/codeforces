#include <iostream>
#include <cmath>


#define ll long long


using namespace std;


int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y, k;
		cin >> x >> y >> k;

		if (x == 0 && y == 0) {
			cout << 0 << "\n";
		}

		ll moves_x = ceil(x / (double)k);
		ll moves_y = ceil(y / (double)k);

		if (y >= x) {
			cout << max(moves_x, moves_y) * 2 << "\n";
		} else {
			cout << max(moves_x, moves_y) * 2 - 1 << "\n";
		}
	}

	return 0;
}
