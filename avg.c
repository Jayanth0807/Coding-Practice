#include<stdio.h>

int main()
{
	int i=1,n;
	int sum=0;
	float avg;
	printf("enter 10 positive integers: \n");
	while(i<=10)
	{
		printf("Enter the number %d:",i);
		scanf("%d",&n);
		if(n<0)
		{
			printf("Enter only positive integers");
			continue;
		}
		sum=sum+n;
		i++;
	}
		avg= sum/10.0;
		printf("The sum and avg is %d , %f",sum,avg);
		return 0;
}
	
		
