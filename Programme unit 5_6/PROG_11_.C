/*A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through 
the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to 
give to the withdrawer*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,a1,a2,a3,a4,a5,a6	;
	clrscr();
	printf("Enter amount=");
	scanf("%d",&n);
	a1=n/100;
	n=n-(a1*100);
	a2=n/50;
	n=n-(a2*50);
	a3=n/10;
	n=n-(a3*10);
	a4=n/5;
	n=n-(a4*5);
	a5=n/2;
	n=n-(a5*2);
	a6=n;
	printf("number of 100's notes=%d\n",a1);
	printf("number of 50's notes=%d\n",a2);
	printf("number of 10's notes=%d\n",a3);
	printf("number of 5's notes=%d\n",a4);
	printf("number of 2's notes=%d\n",a5);
	printf("number of 1's notes=%d\n",a6);
	getch();

}