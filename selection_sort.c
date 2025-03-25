#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a[6];
	int i,j,min,n;
	n=sizeof(a)/sizeof(a[0]);
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d,",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
		{
			min=j;
		}
	}
	
	if(min!=i)
	{
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	}
	
	printf("Sorted array is given by: ");
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
}
		
