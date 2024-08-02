#include<stdio.h>
#include<string.h>
#include<stdlib.h>


/*int atoi(char str)
{
	int result =0;
	int i=0,sign;
	if(sign ='-')
	{
		i++;
		return -1;
	}
	while(str[i])
	{
		if(!(str[i]-'0'>=0 && str[i]-'0'<=9))
			return -1;
			result = result*10 + str[i]-'0';
			i++;
	}
	return result*sign;
}

int main()
{
	char str[100];
	printf("enter the string name");
	scanf("%s",&str);
	int a;
	a=atoi(str);
	printf("given string converted to the integer is %d",atoi);
	return 0;
}
*/

int main()
{
	char *str;
	int n=0;
	printf("Enter the string");
	scanf("%s",&str);
	for(int i=0;str[i]!='\0';i++)
	{
		n=n*10+(str[i]-48);
	}
		printf("%d\n",n);
		return 0;
}
