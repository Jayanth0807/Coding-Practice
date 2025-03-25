#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a[8];
	int i,j= 0;
	printf("Enter array elements: ");
	int l=sizeof(a)/sizeof(a[0]);
	for(i=0;i<l;i++)
	{
		scanf("%d,",&a[i]);
	}
	int temp[l];
	for(i=0;i<l;i++)
	{
		if(a[i]!=0)
		{
			temp[j]=a[i];
			j++;
		}
	}
	while(j<l)
	{
		temp[j++]=0;
	}
	for(i=0;i<l;i++)
	{
		a[i]=temp[i];
	}
	printf("the sorted array is given by: ");
	for(i=0;i<l;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
		
