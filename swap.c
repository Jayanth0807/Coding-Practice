#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values of a and b:");
	scanf("%d %d",&a,&b);
	printf("The values before swapping are a=%d\n and b=%d\n",a,b);
	a=a+b;  
	b=a-b;
	a=a-b;
	
	printf("The values after swapping are given by a=%d\n and b=%d\n",a,b);
	return 0;
}
