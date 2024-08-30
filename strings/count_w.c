#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[20];
	int i;
	int count=0;
	printf("enter string: \n");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
		/*if(str[i]==' '|| str[i]=='\0')
		{
			count++;
		}*/
	}
	printf("the no.of words are present is %d\n",count);
	printf("\n");
	return 0;
}
