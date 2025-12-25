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

// optimize//
// #include <stdio.h>
// #define MAX 5

// int queue[MAX];
// int front = -1;
// int rear = -1;

/* Enqueue operation */
// void enqueue(int value) {
//     if (rear == MAX - 1) {
//         printf("Queue Overflow\n");
//         return;
//     }

//     if (front == -1)
//         front = 0;

//     queue[++rear] = value;
//     printf("%d inserted into queue\n", value);
// }

/* Dequeue operation */
// void dequeue() {
//     if (front == -1 || front > rear) {
//         printf("Queue Underflow\n");
//         return;
//     }

//     printf("%d removed from queue\n", queue[front++]);
// }

/* Peek operation */
// void peek() {
//     if (front == -1 || front > rear) {
//         printf("Queue is empty\n");
//         return;
//     }
//     printf("Front element: %d\n", queue[front]);
// }

/* Display queue */
// void display() {
//     if (front == -1 || front > rear) {
//         printf("Queue is empty\n");
//         return;
//     }

//     printf("Queue elements: ");
//     for (int i = front; i <= rear; i++) {
//         printf("%d ", queue[i]);
//     }
//     printf("\n");
// }

// int main() {
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);

//     display();
//     peek();

//     dequeue();
//     display();

//     return 0;
// }
