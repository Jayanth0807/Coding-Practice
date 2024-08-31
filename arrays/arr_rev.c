#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	int arr[20];
	printf("Enter the array elements: ");
	for(i=0;i<9;i++)
	{
		scanf("%d\n",&arr[i]);
	}
	for(i=0,j=9;i<j;i++,j--)
	{
		int temp;
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("After reversing the elements: \n");
	for(i=0;i<9;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	return 0;
}
