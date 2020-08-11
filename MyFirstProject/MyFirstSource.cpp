#include<stdio.h>
int main()
{
	int age;
	printf("Please Enter Your Age : ");
	scanf_s("%d", &age);

	if (age <= 11)
	{
		printf("%d -> Kid", age);
	}
	else if (age <= 20)
	{
		printf("%d -> Teen", age);
	}
	else if (age <= 60)
	{
		printf("%d -> Adult", age);
	}
	else
	{
		printf("%d -> Old", age);
	}
	return 0;
}