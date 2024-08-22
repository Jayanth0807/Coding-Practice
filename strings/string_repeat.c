#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char s[100]="Jayanth";
	int found=0;
	int flag=1;
	//printf("Enter the string: \n");
	//scanf("%s\n",s);
	
	for(int i=0;i<strlen(s);i++)
	{
		for(int j=0;j<strlen(s);j++)
		{
			if(i!=j && s[i]==s[j])
				found=1;
				break;
		}
	if(!found)
	{
		printf("Non repeated element is: %c\n",s[i]);
	}
	return 0;
	}
}
			
