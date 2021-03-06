#include <iostream>
using namespace std;

typedef int Element;

class Node {
  Node* link;
  Element data;

public:
  Node(int val =0) : data(val), link(NULL) {}
  Node* getLink() {return link;}
  void setLink(Node* next) {link = next;}
  void display() {cout << "[" <<data << "],";}
  bool hasData(int val) {return val ==data;}
  Element getData() { return data; }
  void setData(Element data) {this->data = data;}

};
