#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float m,f,lp,lf,lm,ilm,ilf,p=80000;
	clrscr();
	m=p*0.52;
	f=p-m;
	lm=p*0.35;
	lp=p*0.48;
	ilm=m-lm;
	lf=lp-lm;
	ilf=f-lf;
	printf("number of men=%.2f\n",m);
	printf("number of women=%.2f\n",f);
	printf("number of literate men=%.2f\n",lm);
	printf("number of literate women=%.2f\n",lf);
	printf("number of illiterate men=%.2f\n",ilm);
	printf("number of illiterate women=%.2f\n",ilf);
	getch();
}