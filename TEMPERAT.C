#include<stdio.h>
#include<conio.h>
#define F_lower 0
#define F_upper 250
#define step 25

void main()
{
	int c,f=0;
	clrscr();
	f=F_lower;
	while(f<=F_upper)
	{
		c=(f-32)/1.8;
		printf("%d\t%d\n",c,f);
		f=f+step;
	}
	getch();
}