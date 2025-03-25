#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a[]={1,2,2,6,7,8,9,9};
	int count=0,n;
	printf("enter the elements: ");
	scanf("%d",&n);
	int l=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<l;i++)
	{
		if(a[i]!=n)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
