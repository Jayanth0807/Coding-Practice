#include<stdio.h>

int main()
{
	int sum=0;
	int rem,n;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		sum+= rem;
		n/= 10;  // we can write it as n = n/10;
	}
	printf("The sum of digits is given by %d\n",sum);
	return 0;
}
