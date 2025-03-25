#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i=0,k,l;
	int temp;
	int a[]={1,2,3,4,5,6,7,8,9};
	l=sizeof(a)/sizeof(a[0]);
	printf("Enter the number to be grouped");
	scanf("%d",&k);
	int right=i;
	int left=k-1;
 	for(i=0;i<l;i=i+k)
	{
		if(left>=l)
			break;
		while(right<left)
		{
			temp=a[left];
			a[left]=a[right];
			a[right]=temp;
			right++;
			left--;
		}
		right=i+k;
		left=right+(k-1);
	}
	}
	printf("reverse array in groups");
	for(i=0;i<l;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

