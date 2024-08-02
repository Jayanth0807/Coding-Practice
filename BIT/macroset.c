#include<stdio.h>

#define SET(var , bit) ((var=var|(1<<bit)))
#define CLEAR(var , bit) ((var=var&~(1<<bit)))

int main()
{
	unsigned int n= 0b00001111;
	
	SET(n,4);
	printf("After setting the bit the value is %u\n",n);
	CLEAR(n,2);
	printf("After clearing the bit the value is %u\n",n);
	return 0;
}
