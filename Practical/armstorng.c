/* to find whether the entered number is Armstrong or not */


#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,temp,c=0,rem,sum=0;
	clrscr();
	printf("\nenter the number:");
	scanf("%d",&n);         //scan the number
	temp=n;
	while(temp!=0)             //to calculate no. of digits
	{
		c++;
		temp=temp/10;

	}
	temp=n;
	while(temp!=0)                    //sum of all digits of power no. of digits
	{
		rem=temp%10;
		sum=sum+pow(rem,c);
		temp=temp/10;
	}
	if(sum==n)               //to check the number is armstrong or not
	{
		printf("\n\nthis is armstrong number");
	}
	else
	{
		printf("\n\nthis is not armstrong number");
	}
	printf("\n-Tirth Bharatiya");
	getch();
}
