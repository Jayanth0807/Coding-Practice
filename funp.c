#include<stdio.h>
#include<stdlib.h>

float myfun(int,float);

int main()
{
	int a;
	float b;
	float (*fp) (int ,float);
	fp=myfun;
	float result;
	result=(*fp)(a,b);
	printf("%f", result);
	return 0;
}

float myfun(int a, float b)
{
	float result;
	printf("Enter the values of a and b: \n");
	scanf("%d , %f ",&a,&b);
	result=a+b;
	return result;
}
