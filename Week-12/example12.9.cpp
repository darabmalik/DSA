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

int vec[] = { 1,2,3,4,5 };

int main() {
	int sum = accumulate(vec, vec + 5, 0);
	cout << sum << endl;
	int prod = accumulate(vec, vec + 5, 1, times<int>());
	cout << prod << endl;
	_getch();
	return 0;
}