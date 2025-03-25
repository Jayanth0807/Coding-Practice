#include<stdio.h>
#include<stdlib.h>


int main()
{
	int sum=0;
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n>0)
	{
		int r=n%10;
		sum=sum+r;
		n=n/10;
	}
	int s=sum%10;
	int j=j+s;
	sum=sum/10;
	
	printf("%d",sum);
	return 0;
}
