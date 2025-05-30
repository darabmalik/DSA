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

int set1[] = { 1,2,3 };
int set2[] = { 1,2,3 };
vector<int>set3(10);

int main() {
	vector<int>::iterator first = set3.begin();
	vector<int>::iterator last = set_union(set1,set1 + 3,set2, set2 + 3, first);
	while (first != last) {
		cout << *first << " ";
		first++;
	}
	cout << endl;
	_getch();
	return 0;
}
