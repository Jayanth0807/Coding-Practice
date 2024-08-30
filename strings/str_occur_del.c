#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[20];
	char c='a';
	int i,j;
	printf("Enter the string: \n");
	scanf("%s",str);
	for(i=0,j=0;i<=strlen(str)-1;i++)
	{
		if(str[i]!=c)
		{
			str[j++]=str[i];
		}
	}
		str[j]='\0';
	printf("The string output: %s\t",str);
	return 0;
}
	
