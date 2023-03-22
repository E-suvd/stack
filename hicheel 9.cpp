#include <stdio.h>

int stack[10];
int top_index;

int isEmpty(){
if(top_index==-1) return 1;
else return 0;
}

void push(int val) {
	top_index++;
	if(top_index < 10) {
		stack[top_index] = val;
		printf("%d is pushed in a stack\n", val);
	} else printf("Stack is full\n");
}

int top(){
if(top_index==-1) return -1;
else return stack[top_index];
}


int pop() {
	if(top_index== -1) {
		printf("Srack is empty\n");
		return -1;
	}
	else {
		int top_value = stack[top_index];
		top_index--;
		printf("%d is popped from the stack\n ", top_value);
		return top_value;
	}
}

int main() {
	top_index = -1;
	if(isEmpty()) printf("Stack is empty\n");
	push(5);
	push(6);
	if(isEmpty()) printf("Stack is empty\n");
	printf("%d", top());
	printf("%d", pop());
	printf("%d", pop());
	printf("%d", top());
	if(isEmpty()) printf("Stack is empty\n");
	return 0;
}

