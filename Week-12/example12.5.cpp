#include<vector>
#include<stack>
#include<list>
#include<deque>
#include<bitset>
#include<algorithm>
#include<numeric>
#include<cassert>
#include<string>
#include<iostream>
#include<conio.h>
#include <set>
#include <map>

using namespace std;
int main() {
	bitset<16>b1("1011011110001011");
	bitset<16>b2;
	b2 = ~b1;
	for (int i = b2.size() - 1; i >= 0; i--)
		cout << b2[i];
	cout << endl;
	_getch();
	return 0;
}
