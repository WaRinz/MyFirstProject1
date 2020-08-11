#include<stdio.h>
int main()
{
int num, x;
	printf("- Multiplication Table -\n");
	printf("Please Enter Number : ");
	scanf_s("%d", &num);
	for (x = 1; x <= 12; x++)
	{
		printf("\n%d * %d = %d", num, x, num * x);
	}
	return 0;
}