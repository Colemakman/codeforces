#include <iostream>
#include <vector>


using namespace std;


int main() {
	int t;
	cin >> t;

	int count = 0;
	for (int i = 0; i < t; i++) {
		count = 0;
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}

		int gold = 0;
		for (int person : a) {
			if (person >= k) {
				gold += person;
			} else if (person == 0) {
				if (gold > 0) {
					gold--;
					count++;
				}
			}
		}
		cout << count << "\n";
	}
	

	return 0;
}
