#include <iostream>
#include <string>


using namespace std;


int main() {
	string players;
	cin >> players;

	int danger = 1;
	int max_danger = 0;
	char previous = '-';
	for (char p : players) {
		if (p == previous) {
			danger += 1;
		} else {
			max_danger = max(max_danger, danger);
			danger = 1;	
		}
		previous = p;
		if (max_danger >= 7 || danger >= 7) {
			cout << "YES" << "\n";
			return 0;
		}
	}	
	cout << "NO" << "\n";
}
