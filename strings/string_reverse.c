#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[100];
	printf("Enter the string to reverse");
	scanf("%c",&str[100]);
	char l=strrev(str);
	printf("The reversed string is %c\n",l);
	return 0;
}
