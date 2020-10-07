#include <stdio.h>

int main(void) {

int x=0;
int y=0;
int z=0;
int error = 0;
double t=0;
double v=0;
double n=0;

printf("\nВведіть цілі змінні: x, y, z.\n");
do{
error = 0;

printf("\nx=");
scanf("%d", &x);

printf("\ny=");
scanf("%d", &y);

printf("\nz=");
scanf("%d", &z);

printf("\n x= %d\n y= %d\n z=%d\n", x, y, z);

v = ((z*x)+(z*(x*x*x))+y+(y*(x*x))+((z*z)*x)+(z*z)*(x*x*x)+(z*y)+(z*y*(x*x)));
n = ((z*x)+(z*(x*x*x))-z);

	if (n == 0)
	{
		printf("Виконується ділення на 0\n");
		error = 1;
	}
}while(error == 1);

t= v/n;

printf("\nВідповідь: %lf\n", t);
	return 0;
}
