#include<stdio.h>
#include<conio.h>
void main()

{
int i,n;
	struct student
	{
	
int stdno;
char name[35];
int mark;
}s[209];

FILE* fp;
printf("enter the number of students");
scanf("%d",&n);
fp=fopen("student.txt","w");
for(i=0;i<n;i++)
{
	printf("\n input std-no,name and mark=");
	scanf("%d%s%d",&s[i].stdno,&s[i].name,&s[i].mark);
}
fclose(fp);
fp=fopen("student.txt","r");

while (fscanf(fp,"%d%s%d",&stdno,name,mark)!=EOF)
{
	printf("\n%d\t%s\t%d",stdno,name,mark);
}
fclose (fp);

}