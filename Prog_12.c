#include<stdio.h>
#include<conio.h>
#include<math.h>


void main()

{
	int n,c=0,p,d,sum=0,q;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&n);
	p=n;
	q=n;
	while(n!=0)
	{	c++;
		n=n/10;

	}
	while(p!=0)
	{
		d=p%10;
		sum=sum+pow(d,c);
		p=p/10;

	}
	if(sum==q)
	{
		printf("\nThe number is Armstrong number");
	}
	else
	{
		printf("\nThe number is not Armstrong number");
	}
	printf("\n\n\n\t\t\t-Tirth Bharatiya");
	getch();
}
