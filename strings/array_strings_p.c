#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *arr[5]={
		"jay",
		"sai",
		"vara",
		"bgmi",
		"love",
		};
		char *temp;
	printf("before Sorting: \n");
	for(int i=0;i<5;i++)
	{
		printf("%s\t",arr[i]);
		//printf("\n");
	}
	printf("\n");
	for(int i=0;i<5;i++)
	{
	for(int j=i+1;j<5;j++)
	{
		if(strcmp(arr[i],arr[j])>0)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp; //storing in temp
			 //storing in arr[i]
			  //storing in arr[j]
		}
	}
	}
	printf("After sorting: \n");
	for(int i=0;i<5;i++)
	{
		printf("%s\t",arr[i]);
	}
	return 0;
}
