#include<stdio.h>
#include<stdlib.h>

extern int a;
extern int my_fun()
{
	printf("%d",a);
}

my_fun(a);
