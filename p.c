#include<stdio.h>
#include<conio.h>
void main()
{
	char name;
	int age;
	printf("Enter your name");
	scanf("%c",&name);
	printf("Enter your age");
	scanf("%d",&age); 
	{
		printf(" Enter your name is %c and age is %d",name,age);
	}
	getch();
}