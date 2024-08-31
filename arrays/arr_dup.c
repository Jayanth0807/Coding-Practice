#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[]={1,2,2,4,4,5,6,7,7};
	//printf("Enter the elements: \n");
	/*for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[10]);
	*/
	int l = sizeof(arr)/sizeof(arr[0]);
	printf("Duplicate elements in an array: \n");
	for(int i=0;i<l;i++)
	{
	for(int j=i+1;j<l;j++)
	{
		if(arr[i]==arr[j])
		
			printf("%d",arr[i]);
		
	}
	}
	return 0;
}
