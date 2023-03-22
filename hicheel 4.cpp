#include <stdio.h>
#include <math.h>
struct Point2D {
	int x;
	int y;
};

int main() {
	struct Point2D p1;
	struct Point2D p2;
	
	p1.x = 50;
	p1.y = 20;
	
	p2.x = 40;
	p2.y = 30;
	
	int a = p1.x - p2.x;
	int b = p1.y - p2.y;
	
	float c = (a * b);
	
	printf("%f\n", c);
	
	return 0;
}
