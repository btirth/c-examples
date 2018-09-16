/*to list all the factorial numbers less than or equal
to an input number n.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,factorial=1,c=1;           //n is a positive integer
	clrscr();
	scanf("%d",&n);
	while(factorial<n)
	{
		factorial=factorial*c;
		c++;
		if(factorial<=n)           //print factorial less than or equal to n
		{
			printf("%d ",factorial);
		}
	}
	getch();
}