#include <stdio.h>

int stack[10];
int top_index;

int isEmpty(){
if(top_index==-1) return 1;
else return 0;
}

int top(){
if(top_index==-1) return -1;
else return stack[top_index];
}

void push(int val) {
	top_index++;
	if(top_index < 10) {
		stack[top_index] = val;
		printf("%d is pushed in a stack\n", val);
	} else printf("Stack is full\n");
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
	push(5);
	push(6);
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	push(7);
	push(8);
	push(9);
	push(10);
	printf("%d\n", top());
	
	for(int i=top_index; i>0; i--) {
		printf("%d", stack[i]);
	}
	return 0;
}
