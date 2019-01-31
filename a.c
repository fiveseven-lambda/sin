#include <stdio.h>
#include <math.h>

int main(void){
	double a, b = 0, c = sin(.001);
	printf("%f %f\n", b, b - sin(0));
	printf("%f %f\n", c, c - sin(.001));
	for(double i = 0.002; i < 10; i += .001){
		a = b;
		b = c;
		c = b * 1.999999 - a;
		printf("%f %f\n", c, c - sin(i));
	}
}


