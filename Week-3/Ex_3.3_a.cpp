#include <iostream>
using namespace std;

void print(int n) {
		if (n == 0)
			cout << "0" << endl;
		else {
			cout << n << endl;
			print(n - 1);
		}
}

int main() {
	int n;
	cout << "Enter a starting point(n) \t";
	cin >> n;
	cout << endl;
	print(n);
}