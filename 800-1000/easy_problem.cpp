#include <iostream>


using namespace std;


int main() {
	int n;
	cin >> n;

	int count = 0;
	while (n--) {
		int num;
		cin >> num;
		count += num;	
	}
	if (count > 0) {
		cout << "HARD" << "\n";
	} else {
		cout << "EASY" << "\n";
	}
}
