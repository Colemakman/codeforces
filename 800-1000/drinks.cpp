#include <iostream>


#define ld long double


using namespace std;


int main() {
	int n;
	cin >> n;

	ld count = 0;
	for (int i = 0; i < n; i++) {
		ld p;
		cin >> p;
		count += p / n;
	}
	cout << count << "\n";
}
