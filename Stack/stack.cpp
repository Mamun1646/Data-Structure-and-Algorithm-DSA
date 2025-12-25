#include <iostream>
using namespace std;

const int MAX_STACK_CAPACITY = 100;

int stackSize = 0;
int stackData[MAX_STACK_CAPACITY];

void push(int value) {
  if (stackSize >= MAX_STACK_CAPACITY) {
    cout << "Stack overflow" << endl;
    return;
  }
  stackData[stackSize++] = value;
}

void pop() {
  if (stackSize == 0) {
    cout << "Stack is empty" << endl;
    return;
  }
  --stackSize;
}

void top() {
  if (stackSize == 0) {
    cout << "Stack is empty" << endl;
    return;
  }
  cout << stackData[stackSize - 1] << endl;
}

int main() {
  push(34);
  push(35);
  top();
  pop();
  top();
  return 0;
}