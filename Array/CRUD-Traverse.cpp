#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int arr_size = 0;
int arr[MAX_SIZE];

void create(int value) { arr[arr_size++] = value; }
void update(int index, int value) {
  if (index < 0 && arr_size <= index) {
    cout << "Array size is not exist" << "\n";
  } else
    arr[index] = value;
}
void deleteByIndex(int index) {
  if (index < 0 && arr_size <= index) {
    cout << "Array size is not exist" << "\n";
  } else {
    for (int i = index; i < arr_size - 1; ++i) {
      arr[i] = arr[i + 1];
    }
    arr_size--;
  }
}
void traverse() {
  for (int i = 0; i < arr_size; ++i) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main() {
  create(10);
  create(12);
  create(13);
  create(15);
  traverse();
  update(1, 20);
  traverse();
  deleteByIndex(2);
  traverse();

  return 0;
}
