#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a[8];
	int i,count=0;
	printf("Enter array elements: ");
	int l=sizeof(a)/sizeof(a[0]);
	for(i=0;i<l;i++)
	{
		scanf("%d,",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		if(a[i]==0)
		{
			count=0;
		}
		else
			count++;
	}
	printf("the consecutive one are: %d",count);
	return 0;
}
