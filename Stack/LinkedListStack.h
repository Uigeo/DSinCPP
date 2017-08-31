#include "../LinkedList/Node.h"

class LinkedListStack {
  Node top;

public:
  LinkedListStack() : top(0){

  }
  ~LinkedListSatck() {

  }

  void push(Node* n) {
    n->setLink(top.getLink());
    top.setLink(n);
  }

  Element pop() {
    Node* removed = top.getLink();
    Element temp = removed->getData();
    top.setLink(removed->getLink());
    delete removed;
    return temp;
  }

  Node* peek() {
    return top.getLink();
  }

  void display(){

    for(Node* cur = peek();cur != NULL; cur = cur->getLink()){
      cout << cur->getData() << endl;
    }
  }

  int size() {
    int count = 0;
    for(Node* cur = peek(); cur != NULL; cur = cur->getLink()) count++;
    return count;
  }


  bool isEmpty() {
    return top->getLink() == NULL;
  }
}
