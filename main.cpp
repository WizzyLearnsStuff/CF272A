#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n; 
	n++;

	int sum = 0;
	for (int i = 0; i < n - 1; i++) {
		int a;
		cin >> a;
		sum += a; 
	}
	int p = 1 + n - (sum % n); // n + 1 >= p >= 2
	p = p % n;

	if (p > 5) { cout << "5"; return 0; }

	if (n >= 5) { cout << "4"; return 0; }

	int possible = 5;
	for (int i = 1; i <= 5; i++) {
		if ((((sum % n) + i) % n) == 1) possible--;
	}

	cout << possible;
}
