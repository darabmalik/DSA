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

class String {
	char* str;
public:
	String() {
		str = 0;
	}
	String(char* s) {
		str = strdup(s);
		assert(str);
	}
	int operator<(const String& s)const {
		return strcmp(str, s.str) < 0;
	}
	operator char* () {
		return str;
	}
};
char* list[] = { "epsilon","omega","theta","rho","alpha","beta","phi","gamma","delta"};
const int N = sizeof(list) / sizeof(char*);

int main() {
	int i, j;
	vector<String>v;
	for (int i = 0; i < N; i++) {
		v.push_back(String(list[i]));
	}
	random_shuffle(v.begin(), v.end());
	for (int j = 0; j < N; j++)
		cout << v[j] << " ";
	cout << endl;
	sort(v.begin(), v.end());
	for (int j = 0; j < N; j++)
		cout << v[j] << " ";
	cout << endl;
	_getch();
	return 0;
}
