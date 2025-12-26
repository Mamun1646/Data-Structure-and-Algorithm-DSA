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
struct Node *addNodeAtTheEnd(Node *head, int value) {
  Node *newNode = (Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->next = NULL;

  if (head == NULL) {
    return newNode;
  }
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
  return head;
}
struct Node *addNodeAtTheBeginning(Node *head, int value) {
  Node *newNode = (Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->next = NULL;

  newNode->next = head;
  return newNode;
}
struct Node *deleteByValue(Node *head, int value) {
  if (head == NULL)
    cout << "Linkedlist is an empty!";

  if (head->data == value) {
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
  }
  Node *current = head;
  Node *prev = NULL;

  while (current != NULL) {
    if (current->data == value) {
      prev->next = current->next;
      free(current);
      break;
    }
    prev = current;
    current = current->next;
  }

  return head;
}
int main() {
  Node *head = (Node *)malloc(sizeof(struct Node));
  head->data = 10;
  head->next = NULL;
  head = addNodeAtTheEnd(head, 20);
  head = addNodeAtTheEnd(head, 30);
  head = addNodeAtTheBeginning(head, 80);
  head = deleteByValue(head, 30);
  traverse(head);
  return 0;
}