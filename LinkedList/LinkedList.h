#include "Node.h"

class LinkedList{
  Node org;

public:
  LinkedList(): org(0) {}
  ~LinkedList() {clear();}
  void clear(){
    while(!isEmpty()) delete remove(0);
  }
  Node* getHead() {
    return org.getLink();
  }

  bool isEmpty(){
    return getHead() == NULL;
  }

  Node* getEntry(int pos){
    Node* temp = &org;
    for(int i =1 ; i < pos ; i++ , temp = temp->getLink())
      if(temp == NULL) break;

    return temp;
  }

  void insert(int pos, Node* n){
    Node* prev = getEntry(pos-1);
    if(prev != NULL){
      n->setLink(prev->getLink());
      prev->setLink(n);
    }
  }

  Node* remove(int pos){
    Node* prev = getEntry(pos-1);
    Node* removed = prev->getLink();

    prev->setLink(removed->getLink());

    return removed;
  }

  Node* find(Element val){
    for(Node* p = getHead() ; p != NULL ; p = p->getLink())
      if(p->hasData(val)) return p;

    return NULL;
  }

  void replace(int pos, Node *n){
    Node* prev = getEntry(pos-1);
    Node* replaced = prev->getLink();
    if(prev != NULL){
      prev->setLink(n);
      n->setLink(replaced->getLink());
      delete replaced;
    }
  }

  int size(){
    int count =0;
    for(Node* cur = getHead() ; cur != NULL ; cur = cur->getLink())
      count += 1;

    return count;
  }

  void display(){
    cout << "[전체 항목 수 = " << size() << "] :" ;
    for(Node* p = getHead() ; p != NULL ; p = p->getLink()){
      p->display();
    }
    cout << endl;
  }

};
