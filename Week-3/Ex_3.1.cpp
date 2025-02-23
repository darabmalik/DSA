#include <iostream>
using namespace std;

int pwr(int X, int N)
{
	if (N == 0)
		return 1;
	else
		return pwr(X, N - 1) * X;

}

int main() {
	int const base = 2;
	for (int i = 0; i <= 20; i++) {
		cout << i << "\t" << pwr(base, i) << endl;
	}
}