/*If the total selling price of 15 items and the total profit earned on them is input through the keyboard, 
write a program to find the cost price of one item.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	//pr is profit
	//sp is selling price

	int pr,sp,cost,n=0;
	clrscr();
	while(n<=15)
	{
	printf("Enter the selling price=");
	scanf("%d",&sp);
	printf("Enter the profit=");
	scanf("%d",&pr);
	cost=sp-pr;
	printf("\ncost=%d- - - - - - - - - - - - -\n\n",cost);
	n++;
	}

	getch();
}
