#include <iostream>
#include <string>


using namespace std;


int main() {
	int n;
	cin >> n;
	
	string previous = "";
	int groups = 0;
	while (n--) {
		string c;
		cin >> c;
		if (c != previous){ 
			groups++;
		}
		previous = c;
	}
	if (groups == 0) {
		cout << 1 << "\n";
	} else {
		cout << groups << "\n";
	}
}
