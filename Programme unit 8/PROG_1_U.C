#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter the year=");
	scanf("%d",&n);
	if(n%4==0)
	{
		if(n%100==0)
		{
			if(n%400==0)
			{
				printf("----Leap Year----");
			}
			else
			{
				printf("----Non Leap Year----");
			}
		}
		else
		{
			printf("----Leap Year----");
		}
	}
	else
	{
		printf("----Non Leap Year----");
	}
	goto label;

}