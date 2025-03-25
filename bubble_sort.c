#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[6];
	int i,j,l;
	int temp;
	int flag=0;
	l=sizeof(a)/sizeof(a[0]);
	printf("Enter the array elements: ");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<l-1;i++)
	{
	for(j=0;j<l-1-i;j++)
	{
		if(a[j]<a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			flag=1;
		}
	}
	if(flag==0)
		break;
	}
	for(i=0;i<l-1;i++)
	{
		printf("%d",a[i]);
	}
}
			
				
