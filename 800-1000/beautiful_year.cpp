#include <iostream>
#include <unordered_set>
#include <vector>


using namespace std;


bool has_duplicates(const vector<int>& nums) {
	return false;
}

int main() {
	unordered_set<int> nums;

	int year;
	cin >> year;

	while (year++ <= 10000) {
		nums.clear();

		int temp = year;
		while (temp > 0) {
			int n = temp % 10;
			temp /= 10;
			nums.insert(n);
		}
		if (nums.size() == 4) {
			cout << year << "\n";
			return 0;
		}
	}
}
