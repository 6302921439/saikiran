#include<stdio.h>
int main()
{
	int iArray[10];
	int i;
	for (i = 0; i < 10; i++)
		iArray[i] = (i+1) * 3;
	printf("\n\n");
	printf("Elements of the integer Array : \n\n");
	for (i = 0; i < 10; i++)
		printf("iArray[%d] = %d\n", i, iArray[i]);
	printf("\n\n");
	printf("Elements of the integer array : \n\n");
	for (i = 0; i < 10; i++)
		printf("iArray[%d] = %d \t \t Address = %p\n", i, iArray[i], &iArray[i]);
	printf("\n\n");
	return 0;
}
