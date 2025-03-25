#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a[5]={1,2,3,4,5};
	int *p[5];
	int i;
	for(i=0;i<5;i++)
	{
		p[i]=&a[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%p/n",p[i]);
		printf("%d\n",*p[i]);
	}
	return 0;
}
