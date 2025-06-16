#include<stdio.h>
#include<conio.h>
int main()
{
	char msg[100];
	int i=0;
	FILE*fp;
	printf("enter the messege");
	scanf("%s",msg);
	fp=fopen("www.txt","w");
	while (msg[i]!='\0')
	{
		fputc(msg[i],fp);
		i++;
	}
	
	return 0;
	}