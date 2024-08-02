#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
		printf("Enter the number:\n");

		scanf("%d",&n);
		binary(n);
		return 0;	
}


int binary(int x)
{
	int i;
		for(i=31;i>=0;i--)
		{
			putchar(x&(1<<i)?'1':'0');
			if(i%4==0)
				putchar(' ');
		}
		printf("\n");
		return x;		
}
