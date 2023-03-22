#include <stdio.h>
#define SIZE 5

void enQueue(int value) {
	if (isFull())
		printf("\nQueue is Full!!");
	else {
		if (font == -1) font = 0;
		rear++;
		queue[rear]=value;
		printf("\nEnqueued -> %d", value);
	}
}

int deQueue() {
	if (isEmpty()) {
		printf("\nQueue is empty!!");
		return -1;
    } else {
    	int value=queue[font];
    	if(font==SIZE) {
    		font=-1;
    		rear=-1;
		}
		return value;
	}

}

int peek() {
	if (isEmpty()) {
		printf("\nQueue is Empty!!");
		return -1;
	} else {
		int value=queue[front];
		printf("\nPeeked -> %d", value);
		return value;		
	}
}
void display();

int IsFull() {
if(rear==SIZE-1) return 1;
else return 0;
}

int IsEmpty() {
if(front==-1 && rear==-1) return 1;
else return 0;
}

int peek() {
if (isEmpty()) {
printf("\nQueue is Empty!!");
return -1;
}else {
int value=queue[front];
printf("\nPeeked -> %d", value);
return value;
}
}

int queue[SIZE], front = -1, real = -1;

int main() {
	deQueue();
	
	enQueue(1);
	enQueue(2);
	enQueue(3);
	enQueue(4);
	enQueue(5);
	
	display();
	
	printf("Dequeued-> %d\n", deQueue());
	printf("Dequeued-> %d\n", deQueue());
	printf("Dequeued-> %d\n", deQueue());
	printf("Dequeued-> %d\n", deQueue());
	printf("Dequeued-> %d\n", deQueue());
	enQueue(6);
	printf("Peek-> %d\n", peek());
	display();
	
	return 0;


}
