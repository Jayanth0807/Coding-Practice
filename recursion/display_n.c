#include<stdio.h>
#include<stdlib.h>

void display(int n)
{
	if(n==0)
		return;
	printf("%d ",n);
	display(n-1);
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
		printf("The numbers are: ");
		display(num);
	return 0;
}
