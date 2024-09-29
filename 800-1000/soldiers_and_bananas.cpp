#include <iostream>


using namespace std;


int main() {
	int k, n;
	float w;
	cin >> k >> n >> w;

	int w_sum = (1.0/2) * w * (w + 1);

	if (n >= w_sum * k) {
		cout << 0 << "\n";
		return 0;
	} else {
		cout << w_sum * k - n << "\n";
		return 0;
	}
}
