#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[3][3],b[3][3];
	int c[3][3];
	int i,j,k;
	printf("Enter the array elements of a: \n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	printf("Enter the array elements of b: \n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&b[i][j]);
	}
	}

	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	/*for(k=0;k<3;k++)
	{
		c[i][j]=a[i][k]+b[k][j];
	}
	*/
	}
	}
	printf("Multiplication of two matrices are: \n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("%3d",c[i][j]);
	}
	}
	return 0;
}	
	
	
