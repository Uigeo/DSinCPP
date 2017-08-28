#include <cstdio>
#include <cstdlib>

inline void error(char *message){
  printf("%s\n",message );
  exit(1);
}

const int MAX_STACK_SIZE = 20;

class ArrayStack{

  int top;
  int data[MAX_STACK_SIZE];

public:
  ArrayStack(){top =1};
  ~ArrayStack(){};
  bool isFull(){return top == MAX_STACK_SIZE};
  bool isEmpty(){return top == -1};

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

  void display(){
    printf("# of Element in stack %d\n", top+1 );
    for(int i =0 ; i <= top ; i++)
      printf("%2d\n", data[i] );

    printf("\n");
  }
}
