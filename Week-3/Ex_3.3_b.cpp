#include <iostream>
using namespace std;

int bino(int n, int k) {
	if (n == k)
		return 1;
	else if (k == 0)
		return 1;
	else if (n > 1 && k > 0)
		return bino(n - 1, k - 1) + bino(n - 1, k);
}
int main() {
	cout << bino(2, 3) << endl;
}