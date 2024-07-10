#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[20],i,n;
	printf("Enter the number\n");
	scanf("%d", &n);
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	printf("Binary of the given number is");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
