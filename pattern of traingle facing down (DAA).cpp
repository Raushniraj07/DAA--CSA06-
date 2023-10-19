#include<stdio.h>
int main()
{
	int n,m,s,i,j,k,l,a;
	printf("enter the nunber of rows:");
	scanf("%d",&n);
	a=n;
	m=n-1;
	l=1;
	for(i=n;i<=n;i--)
	{
		for(j=1;j<=l;j++)
		{
			printf(" ");
		}
	l++;
	s=m*(m+1);
	s=(s/2)+1;
	
	for(k=1;k<=a;k++)
	{
		printf("%d ",s);
		s++;
	} 
	m--;
	printf("\n ");
	a--;
}
}
