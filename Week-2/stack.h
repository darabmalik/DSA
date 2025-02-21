#pragma once
#include <iostream>
#include <string>
#define MAX_ITEMS 100

typedef int ItemType;

class Stack {
public:
    Stack();
    int IsEmpty() const;
    int IsFull() const;
    void Push(ItemType newItem);
    void Pop(ItemType& item);
    void Peek(ItemType& pitem);
    void Pushstr(const std::string& str1);
    void Popstr();

private:
    int top;
    ItemType items[MAX_ITEMS];
    char sentence[MAX_ITEMS];
};