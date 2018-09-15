/*If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last
 digit of this number.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,a,a1,a2,a3,a4;
	clrscr();
	printf("Enter number=");
	scanf("%d",&n);
	a1=n%10;
	n=n/10;
	a2=n%10;
	n=n/10;
	a3=n%10;
	n=n/10;
	a4=n;
	a=a1+a4;
	printf("sum of first and fourth digit is %d",a);
	getch();
}
