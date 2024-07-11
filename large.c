#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the values of a,b,c:");
	scanf("%d %d %d",&a ,&b,&c);
	if(a>b && a>c)
	{
		printf("a is large\n");
	}
	else if(b>a && b>c)
		printf("b is large\n");
	else
		printf("c is large\n");
	return 0;
}
