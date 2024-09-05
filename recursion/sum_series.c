#include<stdio.h>
#include<stdlib.h>

int sum_series(int n)
{
	if(n==0)
		return 0;
	printf("%d + ",n);
	return n + sum_series(n-1);
}

int main()
{
	int num;
	printf("enter numbers to display: ");
	scanf("%d",&num);
	if(num<0)
	{
		printf("No Negative numbers \n");
	}
	else
		printf("The sum of series are: ");
		sum_series(num);
	return 0;
}
