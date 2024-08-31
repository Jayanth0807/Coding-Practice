#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10];
	int i,j,k,size=0;
	printf("Enter the elements: \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[10]);
	}
	for(i=0;i<10;i++)
	{
	for(j=i+1;j<10;j++)
	{
		if(arr[i]==arr[j])
		{
			for(k=j;arr-1;k++)
			{
				arr[k]=arr[k+1];
			}
			j--;
		}
	}
	}
	printf("final array: \n");
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
