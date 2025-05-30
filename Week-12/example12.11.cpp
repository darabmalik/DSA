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
	typedef map < string, long, less<string>MAP;
	MAP counter;
	char buf[256];
	while (cin >> buf)
		counter[buf]++;
	MAP::iterator it = counter.begin();
	while (it != counter.end()) {
		cout << (*it).first << " " << (*it).second << endl;
		it++;
	}
	_getch();
	return 0;
}