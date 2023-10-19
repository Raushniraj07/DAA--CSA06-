#include<stdio.h>*-
int factorial(int num)
{
	if(num==1)
	{
        return 1;
	}
	else
	{
		return num*factorial(num-1);
	}
}
int main()
{
	int num;
	printf("enter a positive integer:");
	scanf("%d",&num);
	if(num<0)
	{
		printf("ERROR: factorial of negative number is undefined\n");
	}
	else
	{
		printf("factorial of %d is %d\n",num,factorial(num));
	}
	return 0;
}
