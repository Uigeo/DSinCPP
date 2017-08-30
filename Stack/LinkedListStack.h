#include "../LinkedList/Node.h"

class LinkedListStack {
  Node top;

public:
  LinkedListStack() {
    top(0);
  }
  ~LinkedListSatck() {

  }

  Node* getTop(){
    return top.getLink();
  }

  void push(Node* n) {
    n->insertNext(getHead());
  }

  Node* pop() {
    Node* removed = getTop();
    top.setLink(removed->getLink());
  }

  Node* peek() {

  }

  Node* find() {

  }

  bool isEmpty() {
    return top->getLink() == NULL;
  }
}
