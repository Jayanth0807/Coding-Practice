#include<stdio.h>
#include<math.h>

int main()
{
	double principle,rate,time,n,CI,A;
	
	printf("Enter the principle amount\n");
	scanf("%lf",&principle);
	
	printf("Enter the annual interest rate\n");
	scanf("%lf",&rate);
	
	rate = rate/100;  //convert the entered intrest rate in decimal
	
	printf("Enter the time in years");
	scanf("%lf",&time);
	
	printf("Enter how many times rate of interest is compounded annually\n");
	scanf("%lf",&n);
	
	A = principle*pow((1+rate/n),n*time);
	CI = A-principle;
	printf("The compounded intreset is given by %.2lf\n",CI);
	return 0;
}
