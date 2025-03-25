#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[6];
	int start,end,i,j,l;
	l=sizeof(a)/sizeof(a[0]);
	printf("Enter array elements: ");
	for(i=0;i<l;i++)
	{
		scanf("%d,",&a[i]);
	}
	int pivot;
	pivot=a[0];
	start=1;
	end=l-1;
	while(start<=end)
	{
	while(start<=end && a[start]<=pivot)
	{
		start++;
	}
	while(start<=end && a[end]>pivot)
	{
		end--;
	}
	if(start<end)
	{
		int temp=a[start];
		a[start]=a[end];
		a[end]=temp;
	}
	}
	int temp=a[0];
	a[0]=a[end];
	a[end]=temp;
	
	printf("The sorted array is given by: ");
	for(i=0;i<l;i++)
	{
		printf("%d",a[i]);
	}

}

		

