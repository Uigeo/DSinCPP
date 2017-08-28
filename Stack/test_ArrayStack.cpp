#include <iostream>
#include <ctype.h>
#include "ArrayStack.h"
using namespace std;

int main(int argc, char const *argv[]) {

  ArrayStack stack;
  int i =0;

  while(i != -1) {
    cout << "Type what you want into stack as a integer: " << endl;
    cin >> i ;
    stack.push(i);
  }


  while (!stack.isEmpty()) {
    cout << stack.getTop() << ":" << stack.pop() << endl;
  }
  cout << "HHe" << endl;




  return 1;
}
