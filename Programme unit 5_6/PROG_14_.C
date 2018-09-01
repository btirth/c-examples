#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int c=0,n=1189,m=841,p;
	clrscr();
	while(c!=9)
	{
		printf("A%d=%d mm * %d mm\n",c,n,m);
		p=m;
		m=n/2;
		n=p;
		c++;
	}
	getch();



}