#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	printf("Enter first number");
	scanf("%f",&x);
	printf("Enter second number");
	scanf("%f",&y);
	printf("Enter third number");
	scanf("%f",&z);
	if(x>y)
	{
		if(x>z)
		printf("Largest value is %f",&x);
		else
		printf("Largest value is %f",&z);
	}
	else
	{
		if(y>z)
		printf("Largest value is %f",&y);
		else
		printf("Largest value is %f",&z);
	}
	getch();
}