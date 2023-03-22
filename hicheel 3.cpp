#include <stdio.h>
#include <math.h>
struct Point2D {
	int x;
	int y;
};

int main() {
	struct Point2D p1;
	struct Point2D p2;
	
	p1.x = 30;
	p1.y = 20;
	
	p2.x = 60;
	p2.y = 50;
	
	int a = p1.x - p2.x;
	int b = p1.y - p2.y;
	
	float c = sqrt((a * a) + (b * b));
	
	printf("%f\n", c);
	
	return 0;
}
