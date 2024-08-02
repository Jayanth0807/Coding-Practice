#include<stdio.h>
int main()
{
	int n,save,rem,d;
	int dec =0;
	int j=1;
	
	printf("Enter the binary to be converted:");
	scanf("%d",&n);
	save= n;
	while(n>0)
	{
		rem=n%10;  //getting the last digit 
		d=rem*j;   // multiplying with j initally 1 and storing it in d
		dec=dec+d; // adding d with dec
		j=j*2;     // multiply j with 2
		n=n/10;    // getting first three digits again
	}
	printf("the equivalent decimal number is: %d\n",dec);
	return 0;
}

