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

	bool isEmpty(){return rear == front;};
	bool isFull(){return (rear+1)%MAX_QUEUE_SIZE == front;};

	void enqueue(int e){
		if(isFull()){
			error("This Queue is full");
		}
		else{
			rear = (rear+1)%MAX_QUEUE_SIZE;
			data[rear] = 0;
		}
	}

	int dequeue(){
		if(isEmpty()){
			error("This Queue is empty");
		}
		else{
			front = (front+1)%MAX_QUEUE_SIZE;
			return data[front];
		}
	}

	void display(){

	}
}
