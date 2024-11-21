#include<stdio.h>

int main()
{
	int i,rem,n,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		rem=n%i;
		if(rem==0)
		{	
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("the entered number is perfect number");
	}
	else
		printf("the entered number is not a perfect number");
	return 0;
}
