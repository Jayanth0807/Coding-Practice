#include<stdio.h>
#include<stdlib.h>


unsigned char swapnibbles(unsigned char byte)
{
	return ((byte & 0x0f)<<4) | ((byte & 0xf0)>>4);
}


int main()
{
	unsigned char b=0x5A;
	//printf("Enter the byte:");
	//scanf("%x",&b);
	
	printf("The byte before swapping is given by %u\n",b);
	printf("the byte after swapping is given by %u\n",swapnibbles(b));
	return 0;
}
	
