#include <stdio.h>
int x = 1;
int y = 80;
int s = 0;
float sum = 0;

int main(void) {

do{
	if (x%2 != 0)
	{
		sum += x;
		s++;
	}
x++;
}while(x <= y);

float result = sum/s;

printf("\nСереднє арифметичне всіх непарних чисел у діапазоні [1;80] = %f\n", result);

	return 0;
}
