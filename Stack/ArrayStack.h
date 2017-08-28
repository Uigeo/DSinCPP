#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

inline void error(char *message){
  cout << "message" << endl;
  exit(1);
}

const int MAX_STACK_SIZE = 20;

class ArrayStack{

  int top;
  int data[MAX_STACK_SIZE];

public:
  ArrayStack(){top =-1;};
  ~ArrayStack(){};
  bool isFull(){return top == MAX_STACK_SIZE;};
  bool isEmpty(){return top == -1;};

  void push(int e){
    if(isFull()) error("Stack Full Error");
    data[++top] = e;
  }

  int pop(){
    if(isEmpty())error("Stack Empty Error");
    return data[top--];
  }

  int peek(){
    if(isEmpty()) error("Stack Empty Error");
    return data[top];
  }

  int getTop(){
    return top;
  }

  void display(){
    cout << "# of Elements in stack" << top+1 <<endl;
    for(int i =0 ; i <= top ; i++)
      cout << data[i] << endl;

    cout << endl;
  }
};
