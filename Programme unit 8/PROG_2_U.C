#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("Enter a=");
	scanf("%d",&a);
	printf("      b=");
	scanf("%d",&b);
	printf("      c=");
	scanf("%d",&c);
	if(a==b&&b==c&&c==a)
	{
		printf("\n\n* * * * equilateral triangle * * * *");
	}
	else if(a==b||b==c||c==a)
	{
		printf("\n\n* * * * isosceles triangle * * * *");
	}
	else
	{
		printf("\n\n* * * * scalene triangle * * * *");
	}
	getch();
}
