#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> nums(n);

	int t;
	for (int i = 0; i < n; i++) {
		cin >> t;
		nums[i] = t; 
	}

	int sum = 0;
	for (int number : nums) {
		sum += number;
	}
	int half = sum / 2;
}
