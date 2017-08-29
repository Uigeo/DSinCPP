#include <iostream>
using namespace std;

class Node {
  Node* link;
  int data;

public:
  Node(int val =0) : data(val), link(NULL) {}
  Node* getLink() {return link;}
  void setLink(Node* next) {link = next;}
  void display() {cout << "[" <<data << "],";}
  bool hasData(int val) {return val ==data;}

  void insertNext(Node* n){
    if( n != NULL){
      n->link = link;
      link = n;
    }
  }

  Node* removeNext(){
    Node* removed = link;
    if( n != NULL){
      link = removed->link;
    }
    return removed;
  }
};
