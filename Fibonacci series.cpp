#include<stdio.h>
int main()
{
	int n,first=0,second=1,next;
	printf("enter the number of terms:");
	scanf("%d",&n);
	printf("fibonacci series up to %d term: \n",n);
	for(int i=0;i<n;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		printf("%d",next);
	}
	return 0;
}
///In this program, the user is asked to enter the number of
//terms to be printed in the Fibonacci series. The first two terms436// of the series are initialized as 0 and 1, respectively. The for
//loop is used to generate the next terms in the series by adding
//the previous two terms. The if statement is used to handle the 
//first two terms separately. Finally, each term in the series is
// printed to the console.



