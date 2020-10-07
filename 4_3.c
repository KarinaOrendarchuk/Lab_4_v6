#include <stdio.h>

int n, a, i;
float sum = 1;
char error = 0;

int main(void) {
printf("\nВведіть дійсне число а та натуральне число n");

printf("\na=");
scanf("%d", &a);

do{
error = 0;
	printf("\nn=");
	scanf("%d", &n);

		if (n < 1){
			printf("\nn Має бути натуральним числом!\n");
			error = 1;
		}

}while(error == 1);

		for (i = 1; i <= n; i++) 
		sum *= (i*(i+1))/2+a;

	printf("\nВідповідь: %.2f\n", sum);
	return 0;
}
