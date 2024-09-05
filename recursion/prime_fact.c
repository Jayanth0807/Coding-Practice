#include<stdio.h>
#include<stdlib.h>

int prime(int n)
{
	int i=2;
	if(n==1)
		return 1;
	while(n%i!=0)
	{
		i++;
	}
	printf("%d ",i);
	return prime(n/i);
}

int main()
{
	int num;
	printf("enter number: ");
	scanf("%d",&num);
	if(num==1)
	{
		printf("Number has no prime factors ");
	}
	else
		printf("the prime factors of given numbers: %d\n",prime(num));
	return 0;
}
