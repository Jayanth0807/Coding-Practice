#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a[6];
	int i,max,smax,tmax,l;
	l=sizeof(a)/sizeof(a[0]);
	printf("Enter array elements: ");
	for(i=0;i<l;i++)
	{
		scanf("%d,",&a[i]);
	}
	max=0;
	smax=-1;
	for(i=0;i<l;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(i=0;i<l;i++)
	{
		if(a[i]>smax && a[i]!=max)
		{
			smax=a[i];
		}
	}
	for(i=0;i<l;i++)
	{
		if(a[i]>tmax && a[i]!=smax && a[i]!=max)
		{
			tmax=a[i];
		}
	}
	printf("largest of three elements are given by: \n");
	printf("%d %d %d",max,smax,tmax);
	printf("The product of three triplets are given by: \n");
	int result=max*smax*tmax;
	printf("%d\n",result);
	return 0;
}
