#include <cstdio>
#include <cstdlib>

inline void error(char *message){
	pritf("%s\n", message );
	exit(1);
}

const int MAX_QUEUE_SIZE = 20;

class ArrayQueue{
	int front, rear;
	int data[MAX_QUEUE_SIZE];

	public:
	ArrayQueue(){front = 0 ; rear = 0 ;};
	~ArrayQueue(){};

	bool isEmpty(){return rear == 0 };
	bool isPull(){return fornt == rear};

	void push(){

	}
	
	void pop(){

	}

	void display(){

	}
}
