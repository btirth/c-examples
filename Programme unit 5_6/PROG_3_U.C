#include<stdio.h>
#include<conio.h>
void main()
{
	int m[5];
	float per,total_marks;
	clrscr();
	printf("Enter Marks\n");
	printf("Sub1 :");
	scanf("%d",&m[1]);
	printf("Sub2 :");
	scanf("%d",&m[2]);
	printf("Sub3 :");
	scanf("%d",&m[3]);
	printf("Sub4 :");
	scanf("%d",&m[4]);
	printf("Sub5 :");
	scanf("%d",&m[5]);
	total_marks=m[1]+m[2]+m[3]+m[4]+m[5];
	printf("Total Marks=%f\n",total_marks);
	per=total_marks/5;
	printf("Percentage=%.2f\n",per);
	getch();
}