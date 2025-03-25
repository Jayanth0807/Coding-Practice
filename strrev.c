#include<stdio.h>
#include<string.h>

void rev(char str[],int first,int last)
{
	int temp;
	while(first<last)
	{
		temp=str[first];
		str[first]=str[last];
		str[last]=temp;
		first++;
		last--;
	}
}

int main()
{
	char str[20];
	int res;
	printf("Enter the string");
	scanf("%[^\n]s",str);
	int l=strlen(str);
	rev(str,0,l-1);
	printf("reversed string is %s",str);
	return 0;
}

