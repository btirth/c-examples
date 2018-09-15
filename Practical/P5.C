/*While purchasing certain items, a discount of 10% is offered if the quantity
purchased is more than 1000.If quantity and price per item are input through
the keyboard, write a program to calculate the total expenses. */

#include<stdio.h>
#include<conio.h>

void main()
{
	int q,a;                      //q is  quantity
				      //a is a amount
	float  t,d,e;  		     // t is a total amount
				     //d is a discount
				     //e is a total expenses
	clrscr();
	printf("\nQuantity ");
	scanf("%d",&q);   		// to scan quantity
	printf("\nAmount ");
	scanf("%d",&a);  		//to scan amount
	t=q*a;  			//find total amount
	printf("\nTotal is %f",t);
	if(t>1000)
		{
			d=t*.1;     	//find discount
			printf("\nDiscount is %f",d);
			e=t-d;    	//total expenses
			printf("\nTotal expenses %f",e);
		}
	if (t<1000)
		{
			printf("\nTotal expenses %f",t);
		}
	//print total expenses
	printf("\n\n\n\t\t\t-18DCS008");
	printf("\n\t\t\t-Tirth Bharatiya");
	getch();
}
