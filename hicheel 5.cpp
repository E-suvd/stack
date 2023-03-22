#include <stdio.h>

int stack[10];
int top_index;

void push(int val) {
	top_index++;
	stack[top_index] = val;
	printf("%d\n", val);
}

int main() {
	top_index = -1;
	
	push(5);
	push(6);
	
	return 0;
}
