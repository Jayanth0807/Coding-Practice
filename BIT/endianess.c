#include<stdio.h>

int main()
{
unsigned int i;
printf("Enter a number to check:");
scanf("%x",&i);
char *c = (char *)&i; //main step  

if(*c!=0)
{
	printf("The system is little endian");
}
else
{
	printf("The system is big endian");
}
	return 0;
}



unsigned int i;
scanf("%x",&i);

char *c =(char *)&i;

if(*c!=0)
{
	pf("Little");
}
else
{
	PF("bIG");
}
