#include <iostream>

struct Node {
  int data;
  Node *next;
};

int main() {
  Node *head = new Node();
  std::cout << "Created a new Node" << head;
}
