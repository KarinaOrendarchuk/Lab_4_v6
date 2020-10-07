#include <stdio.h>
#include <math.h>

float x = 1, y = 0;

int main(void) {

printf("\n********************\n");
printf("X\t\tY\n");
printf("********************\n");

while (x <= 2)
{
	y = log2(x);

	printf("%.2lf\t%7.2lf\n", x, y);
	
	x += 0.025;
}

	return 0;
}
