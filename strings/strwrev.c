#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char s[],int a,int b)
{
	char c;
	while(a<b)
	{	
		c=s[a];
		s[a]=s[b];
		s[b]=c;
		a++;
		b--;
	}
}

int main()
{
	char ch[100];
	int start=0, end;
	printf("Enter the string:");
	scanf("%[^\n]s",ch);
	int l=strlen(ch);
	reverse(ch,0,l-1);
	for(int i=0;i<=l;i++)
	{
		if(ch[i]==' ' || ch[i]==0)
		{
			end=i-1;
			reverse(ch,start,end);
			start=i+1;
		}
	}
	
	printf("%s\n",ch);
	start=0;
	for(int i=0;i<=l;i++)
	{
		if(ch[i]==' ' || ch[i]==0)
		{
			end=i-1;
			reverse(ch,start,end);
			start=i+1;
		}
	}
	
	printf("%s\n",ch);
}
			
	
