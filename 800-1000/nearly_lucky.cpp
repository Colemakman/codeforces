#include <iostream>

#define ll long long

using namespace std;



bool is_lucky_number(ll n) {
	
	if (n == 0) {
		return false;
	}

	int digit;
	while (n > 0) {
		digit = n % 10;
		n /= 10;	

		if (digit != 4 && digit != 7) {
			return false;
		}	
	}
	return true;
}

int lucky_numbers(ll n) {

	int count = 0;
	int digit;
	while (n > 0) {
		digit = n % 10;
		n /= 10;	

		if (digit == 4 || digit == 7) {
			count++;
		}	
	}
	return count;
}

int main() {
	ll num;
	cin >> num;
	
	if (is_lucky_number(lucky_numbers(num))) {
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}

	return 0;
}
