#pragma once
#include "stack.h"
#include <iostream>
#include <string>
using namespace std;

Stack::Stack() : top(-1) {}

int Stack::IsEmpty() const {
    return top == -1;
}

int Stack::IsFull() const {
    return top == MAX_ITEMS - 1;
}

void Stack::Push(ItemType newItem) {
    if (IsFull()) {
        cout << "Stack Overflow" << endl;
        exit(1);
    }
    items[++top] = newItem;
}

void Stack::Pop(ItemType& item) {
    if (IsEmpty()) {
        cout << "Stack Underflow" << endl;
        exit(1);
    }
    item = items[top--];
}

void Stack::Peek(ItemType& pitem) {
    if (IsEmpty()) {
        cout << "Stack Underflow" << endl;
        exit(1);
    }
    pitem = items[top];
    cout << "The item at top is: " << pitem << endl;
}

void Stack::Pushstr(const string& str1) {
    if (str1.length() > MAX_ITEMS) {
        cout << "String too long to push onto stack." << endl;
        return;
    }
    for (int i = 0; i < str1.length(); i++) {
        if (IsFull()) {
            cout << "Stack Overflow" << endl;
            exit(1);
        }
        sentence[++top] = str1[i];
    }
}

void Stack::Popstr() {
    if (IsEmpty()) {
        cout << "Stack Underflow" << endl;
        exit(1);
    }
    while (top >= 0) {
        cout << sentence[top--];
    }
    cout << endl;
}
