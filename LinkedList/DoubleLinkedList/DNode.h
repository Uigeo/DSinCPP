#include <iostream>
using namespace std;

typedef int Element;

class DNode{
  Node *r_link, *l_link;
  Element data;


public:
  DNode(int val =0) : data(val), r_link(NULL), l_link(NULL) {}

  Node* getRLink(){return r_link;}
  Node* getLLink(){return l_link;}
  void setRLink(Node* n){r_link = n;}
  void setLLink(Node* n){l_link = n;}
  Element getData(){return data;}
  void setData(Element val){ data =val;}
  bool hasData(Element val){ return val == data;}
  void display() {cout << "[" <<data << "],";}
}
