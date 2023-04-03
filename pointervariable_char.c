#include<stdio.h>
int main(void)
{
	char ch;
	char *ptr = NULL;
	ch = 'A';
	printf("\n\n");
	printf("BEFORE ptr = &ch \n\n");
	printf("Value of 'ch' = %c\n\n", ch);
	printf("Address of 'ch' = %p\n\n", &ch);
	printf("Value at Address of 'ch' = %c\n\n", *(&ch));
	ptr = &ch;
	printf("\n\n");
	printf("AFTER ptr = &ch \n\n");
	printf("Value of 'ch' = %c\n\n", ch);
	printf("Address of 'ch' = %p\n\n", ptr);
	printf("Value At address of 'ch' = %c\n\n", *ptr);
	return 0;
}
