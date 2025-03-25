#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=20;
	int *b=&a;
	printf("%p",b);
	printf("%d",*b);
}
