#include<stdio.h>
int main(void)
{
	float fArray[10];
	float *ptr_fArray = NULL;
	int i;
	for(i = 0; i < 10; i++)
		fArray[i] = (float)(i+1) * 1.5f;
	ptr_fArray = fArray;
	printf("\n\n");
	printf("The elements of the 'float' Array : \n\n");
	for(i = 0; i < 10; i++)
		printf("fArray[%d] = %f\n",i, *(ptr_fArray+i));
	printf("\n\n");
	printf("The elements of the 'float' Array : \n\n");
	for(i = 0; i < 10; i++)
		printf("fArray[%d] = %f \t \t Address = %p\n", i, *(ptr_fArray+i),(ptr_fArray+i));
	printf("\n\n");
	return 0;
}
