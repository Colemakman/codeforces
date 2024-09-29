#include <iostream>
#include <cmath>


using namespace std;


int reverse_number(int n) {
	int reversed = 0;
	while (n != 0) {
		int digit = n % 10;	
		reversed = reversed * 10 + digit;
		n /= 10;
	}

	return reversed;
}

int main() {
	int m, s;
	cin >> m >> s;

	if (s == 0 || s > 9 * m) {
		cout << -1 << " " << -1 << "\n";

		return 0;
	}

	if (s < m) {
		int smallest = s * pow(10, m);
		int biggest = 

	int biggest = 0;
	for (int i = m - 1; i >= 0; i--) {
		if (s > 9) {
			biggest += 9 * pow(10, i);
			s -= 9;
		} else {
				biggest += s;
		}
	}

	int smallest = reverse_number(biggest);
	cout << smallest << " " << biggest << "\n";

	return 0;
}
