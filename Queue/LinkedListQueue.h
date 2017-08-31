#include "../LinkedList/Node.h"

inline void error(char *message){
  cout << "message" << endl;
  exit(1);
}

class LinkedListQueue {

  Node front, lear;

public:
  LinkedListQueue() : fornt(0), lear(0) {}
  ~LinkedListQueue(){};

  Node* getFront(){
    return front.getLink();
  }

  Node* getLear(){
    return lear.getLink();
  }

  void enqueue(Node* n){
    if(isEmpty()){
      front.setLink(n);
      lear.setLink(n);
    }
    else{
      front.setLink(n);
    }
  }

  Element dequeue(){
    Node* removed = rear.getLink();
    Node* prev;
    Element temp;
    if(isEmpty()){
      error("the Queue is Empty");
      exit(1);
    }
    else{
      for(prev=front.getLink() ; prev->getlink != removed ;prev = prev->getLink());
      temp = removed->getData();
      prev->setLink(NULL);
      lear.setLink(prev);
    }
    return temp;
  }

  bool isEmpty(){
    return front.getLink() == NULL || lear.getLink() == NULL;
  }

  int size(){
    int count =0;
    for(Node* cur = getFront(); cur != NULL ; cur = cur->getLink()) count++;
    return count;
  }

  void display(){
    for(Node* cur = getFront(); cur != NULL; cur = cur->getLink()){
      cout << cur->getData() << endl;
    }
  }
};
