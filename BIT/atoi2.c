#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *str1 = "1412";
	char *str2 = "3.145678";
	
	int res1 = atoi(str1);
	int res2 = atoi(str2);
	
	printf("atoi(%s) is %d\n",str1,res1);
	printf("atoi(%s) is %d\n",str2,res2);
	return 0;
}
