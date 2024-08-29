#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[5][10]={
		"jay",
		"sai",
		"vara",
		"bgmi",
		"love",
		};
		char temp[20];
	printf("before Sorting: \n");
	for(int i=0;i<=5;i++)
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
			strcpy(temp,arr[i]); //storing in temp
			strcpy(arr[i],arr[j]); //storing in arr[i]
			strcpy(arr[j],temp);  //storing in arr[j]
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
