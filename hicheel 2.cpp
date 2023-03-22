#include <stdio.h>
struct myStructure {
	int myInt;
	char myChar;
	float myFloat;
};

int main() {
	struct myStructure s1;
	s1.myInt=33;
	s1.myChar='A';
	s1.myFloat=3.1415392;
	
	printf("%d, %c, %f", s1.myInt, s1.myChar, s1.myFloat);
	return 0;
}
