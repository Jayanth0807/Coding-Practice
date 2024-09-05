#include<stdio.h>
#include<stdlib.h>

long int sum(int n)
{
	if(n==0)
		return 1;
	
	return(n*sum(n-1));
}

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num<0)
	{
		printf("no factorial for negative number \n");
	}
	else
		printf("The factorial value is: %ld\n ",sum(num));
	return 0;
}
