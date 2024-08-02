#include<stdio.h>

#define MACRO(n) (n=n&~(1<<9)) && (n=n|(1<<19))

int main()
{
	int n;
	printf("enter the number to set and clear");
	scanf("%d",&n);
	MACRO(n);
	printf("In given number the the 9 the bit is cleared and 19th bit is set %d",n);
	return 0;
}
