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
	stack<int, list<int>>stk;
	for (int i = 1; i <= 10; i++)
		stk.push(i);
	while (!stk.empty()) {
		cout << stk.top() << endl;
		stk.pop();
	}
	_getch();
	return 0;
}