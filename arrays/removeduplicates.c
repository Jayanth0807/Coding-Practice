#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a[]={1,1,1,2,2,2,3,3,3,4,4};
	int l,i,j;
	int k;
	l=sizeof(a)/sizeof(a[0]);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
			for(k=j;k<l-1;k++)
			{
				a[k]=a[k+1];
					
			}
			j--;
			l--;
			}
	        }
	}	
	for(i=0;i<l;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
