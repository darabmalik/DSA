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
	vector<int>v;
	for (int i = 0; i < 25; i++)
		v.push_back(i);
	random_shuffle(v.begin(), v.end());
	for (int j = 0; j < 25; j++)
		cout << v[j] << " ";
	cout << endl;
	_getch();
	return 0;
}