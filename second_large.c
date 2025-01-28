#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[]={1,3,5,7,9,10,15,67};
	int i,l,large,slarge;
	l=sizeof(a)/sizeof(a[0]);
	printf("Enter array elements\n");
	for(i=0;i<l;i++)
	{
		large=a[0];
		slarge=-1;
		if(a[i]>large)
		{
			large=a[i];
		}
	}
		printf("Largest element is %d\n",large);
	for(i=0;i<l;i++)
	{

		 if(a[i]>slarge && a[i]!=large)
		{
			slarge=a[i];
		}
	}
		printf("second Largest element is %d\n",slarge);

}
		
