#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[6];
	int i,j,temp;
	printf("Enter array elements: ");
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		scanf("%d,",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
	while(j>=0 && a[j]>temp)
	{
		a[j+1]=a[j];
		j--;
	}
		a[j+1]=temp;
	}
	for(i=1;i<n;i++)
	{
	printf("%d,",a[i]);
	}
}
