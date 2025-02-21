#include <iostream>
#include <string>
#include "stack.h"
#include "implement.h"
using namespace std;

int main() {
    Stack s;
    int item;
    int pitem = 0;
    string ch = "I am a boy.";

    for (int i = 0; i < 20; i++) {
        s.Push(i);
    }

    s.Peek(pitem);

    for (int i = 0; i < 20; i++) {
        s.Pop(item);
        cout << item << endl;
    }

    s.Pushstr(ch);
    s.Popstr();

    return 0;
}