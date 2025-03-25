#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int i,j,k;
	int l=sizeof(a)/sizeof(a[0]);
	printf("Enter no of elements to be rotate: ");
	scanf("%d",&k);
	int last=l-1;
	for(i=0;i<k;i++)
	{
		int first=a[0];
		for(j=0;j<l-1;j++)
		{
			a[j]=a[j+1];
		}
		a[last]=first;
	}
	printf("rotatation is given by: ");
	for(i=0;i<l;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

			
