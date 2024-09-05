#include<stdio.h>
#include<stdlib.h>

float power(float a,int n)
{
	if(n==0)
		return 1;
	else
		return (a*power(a,n-1));
}

int main()
{
	int n;
	float p,a;
	printf("enter float and int numbers: ");
	scanf("%f %d",&p,&n);
	printf("%f float raised to %d int is %f\n: ",p,n,a);
	a=power(p,n);
	return 0;
}
