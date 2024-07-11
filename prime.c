#include<stdio.h>

int main()
{

	int n;
	int flag=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("it is not a prime number");
	}
	else
		printf("Is a prime number");
	return 0;
}
