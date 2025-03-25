#include<stdio.h>
#include<stdlib.h>


float add(int a, float b);

int main()
{
	float (*a)(int ,float );
	float result;
	a=add;
	result=add(5,6.5);
	printf("%f",result);
	result=(*a)(7,7.5);
	printf("%f\n",result);
	return 0;
}

float add(int a,float b)
{
	return a+b;
}
