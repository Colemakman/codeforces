#include <iostream>


using namespace std;


int main() {
	int n, h;
	cin >> n >> h;

	int p;
	int taller = 0;
	for (int i = 0; i < n; i++) {
		cin >> p;
		if (p > h) {
			taller++;
		}	
	}
	cout << n + taller << "\n";

	return 0;
}
