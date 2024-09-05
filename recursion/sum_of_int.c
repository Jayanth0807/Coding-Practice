#include<stdio.h>
#include<stdlib.h>

int sum_digit(long int n)
{
	if(n/10==0)
		return n;
	return n%10+ sum_digit(n/10);
}

void display(long int n)
{
	if(n/10==0)
	{
		printf("%ld",n);
		return;
	}
	display(n/10);
	printf("%ld + ",n%10);
}

int main()
{
	int num;
	printf("Enter the number of terms: ");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Negative numbers");
	}
	else
		printf("sum of digits are: ");
		sum_digit(num);
		display(num);
	return 0;
}	
