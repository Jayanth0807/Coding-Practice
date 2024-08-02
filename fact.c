#include<stdio.h>

int main()
{
	int n,num;
	long fact=1;
	printf("Enter the number to find the factorial value:");
	scanf("%d", &n);
	num= n;
	if(num<0)
	{
		printf("No factorial for negative number\n");
	}
	else
	{
		while(n>1)
		{
			fact = fact*n;
			n--;
		}
	}
	printf("the fact value of given number is %ld\n",fact);
	
	return 0;
}
