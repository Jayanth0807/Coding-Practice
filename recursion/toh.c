#include<stdio.h>
#include<stdlib.h>

void tofh(int ndisk, char s, char t, char d)
{
	if(ndisk==1)
	{
		printf("move the disk %d from %c--->%c\n",ndisk,s,d);
		return;
	}
	tofh(ndisk-1,s,d,t);
	printf("move the disk %d from %c--->%c\n",ndisk,s,d);
	tofh(ndisk-1,t,s,d);
}

int main()
{
	int n;
	char s='A',t='B',d='C';
	printf("Enter the number of disks: ");
	scanf("%d",&n);
	printf("the sequence is: \n");
	tofh(n,s,t,d);
	return 0;
}
