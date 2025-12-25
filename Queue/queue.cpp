#include <iostream>
using namespace std;
const int MAX_QUEUE_CAPACITY = 100;
int queue_size = -1;
int queueArr[MAX_QUEUE_CAPACITY];
void push(int value) { queueArr[++queue_size] = value; }
void pop() {
  if (queue_size < 0)
    cout << "Queue is underflow" << endl;
  else {
    --queue_size;
    for (int i = 0; i <= queue_size; ++i) {
      queueArr[i] = queueArr[i + 1];
    }
  }
}
void front() {
  if (queue_size < 0) {
    cout << "Queue is an Empty" << endl;
  } else
    cout << queueArr[0] << endl;
}

void back() {
  if (queue_size < 0) {
    cout << "Queue is an Empty" << endl;
  } else
    cout << queueArr[queue_size] << endl;
}

void traverse() {
  if (queue_size < 0) {
    cout << "Queue is an Empty" << endl;
  } else {
    for (int i = 0; i <= queue_size; ++i) {
      cout << queueArr[i] << " ";
    }
    cout << endl;
  }
}

int main() {
  push(10);
  push(15);
  push(20);
  //   front();
  //   back();
  traverse();
  pop();
  //   front();
  //   back();
  traverse();

  return 0;
}