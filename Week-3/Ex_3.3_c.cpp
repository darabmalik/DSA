#include<iostream>
using namespace std;

bool IsPrime(int n, int k) {

	if (k == n) return true;

	if (n % k == 0) return false;

	return IsPrime(n, k + 1);
}

int main() {

	int n, k = 2;

	cout << "Enter a number to check if it's prime or not: ";
	cin >> n;

	if (IsPrime(n, k)) {
		cout << n << " is a prime number." << endl;
	}

	else {
		cout << n << " is not a prime number." << endl;
	}

	return 0;
}