/*If a five-digit number is input through the keyboard, write a program to reverse the number.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a1,a2,a3,a4,a5;
	clrscr();
	printf("Enter number=");
	scanf("%d",&n);
	a1=n%10;
	n=n/10;
	a2=n%10;
	n=n/10;
	a3=n%10;
	n=n/10;
	a4=n%10;
	n=n/10;
	a5=n;
	printf("%d%d%d%d%d",a1,a2,a3,a4,a5);
	getch();

}