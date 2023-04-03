
#include<stdio.h>
int main()
{
	int numbers[]={2,3,4,5};
	int size=sizeof(numbers)/sizeof(numbers[0]);
	int total_sum=0;
	int product=1;
	for(int i=0;i<size;i++){
		total_sum +=numbers[i];
		product *=numbers[i];
	}
	printf("sum of all elements: %d\n",total_sum);
	printf("product of all elements:%d\n",product);
	return 0;
        }

