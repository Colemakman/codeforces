#include <iostream>


using namespace std;


int main() {
	int n;
	cin >> n;

	int x = 0, y = 0, z = 0;
	for (int i = 0; i < n; i++) {
		int vx, vy, vz;

		cin >> vx >> vy >> vz;

		x += vx;
		y += vy;
		z += vz;
	}
	if (x == 0 && y == 0 && z == 0) {
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}

	return 0;
}
