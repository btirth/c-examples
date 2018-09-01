/*Write a program to receive values of an angle in degrees and check wether sum of squares
sin and cosine of this angle is equal to 1.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
		float t,r,a1,a2;
		clrscr();
		printf("Enter the angle=");
		scanf("%f",&t);
		a1=asin(t);
		a2=acos(t);
		r=sqrt(a1)+sqrt(a2);
		if(r==1)
		{
			printf("sum of squres of sin and cosin of this angle is 1");
		}
		else
		{
			printf("sum of squres of sin and cosin of this angle is not 1");
		}
		getch();

}