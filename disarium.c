#include<stdio.h>

#include<math.h>

int main()
{
	int n,sum=0;
	double len=0,rem=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		len=len+1;
		n=n/10;
	}
	printf("length is %f",len);
	int num;
	num=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(int)pow(rem,len);
		n=n/10;
		len--;
	}
	if(num==sum)
	{
		printf("it is a darisium number");
	}
	else
		printf("It is not a darisium number");
	return 0;
}
		
