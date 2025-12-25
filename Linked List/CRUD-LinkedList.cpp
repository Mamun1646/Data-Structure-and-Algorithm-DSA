#include <iostream>
using namespace std;
struct Node {
  int data;
  Node *next;
};
void traverse(Node *head) {
  Node *current = head;

  while (current != NULL) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}
int main() {
  Node *head = (Node *)malloc(sizeof(struct Node));
  head->data = 10;
  head->next = NULL;

  Node *second = (Node *)malloc(sizeof(struct Node));
  second->data = 20;
  second->next = NULL;

  Node *third = (Node *)malloc(sizeof(struct Node));
  third->data = 30;
  third->next = NULL;

  head->next = second;
  second->next = third;

  traverse(head);
}