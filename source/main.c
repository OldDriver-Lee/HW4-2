#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main(void)
{
	int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
	int tmp, i, k, b = 9, s = -1;
	puts("Data items in original");

	for (i = 0; i < SIZE; i++){
		printf("%4d", a[i]);
	}

	for (k = 0; k <b; k++){
		for (i = 0; i < b; i++){
			if (a[i]>a[i + 1]){
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
			}
			if (a[b - 1] < a[b]){
			b = b - 1;
			}
		}
		s += 1;	
	}
	
	puts("\nData items in ascending order");
		for (i = 0; i < SIZE; i++)
			printf("%4d", a[i]);
	printf("\n總共經過%d次", s);
	puts("");

	system("pause");
	return 0;
}