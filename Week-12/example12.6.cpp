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

const int N = 100;

int main() {
	vector<int>iv(N);
	iv[50] = 37;
	vector<int>::iterator iter = find(iv.begin(), iv.end(), 37);
	if (iter == iv.end())
		cout << "Not Found!\n";
	else
		cout << "Found at " << iter - iv.begin() << "\n";
	_getch();
	return 0;
}