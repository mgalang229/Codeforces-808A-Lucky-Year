#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// formula to get the answer:
	// = (first digit of the current + 1) * 10 ^ (number of digits of the current - 1)
	int temp = n;
	int digits = 0;
	while (temp > 0) {
		temp /= 10;
		digits++;
	}
	int first_digit = n / (int) pow(10, digits - 1);
	int next_lucky_year = (first_digit + 1) * (int) pow(10, digits - 1);
	cout << next_lucky_year - n << '\n';
	return 0;
}
