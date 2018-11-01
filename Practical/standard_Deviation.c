/*to compute the standard Deviation*/

#include<stdio.h>
#include<conio.h>
#include<math.h>				// for mathematics uses 
void printline();				//define function
int mean();					//define function
void main()					//main function
{
	int a;
	clrscr();
	a=mean();
	printline();				//function callled
	printf("\n\tThe entered values standard deviation is: %2d ",a);
	printline();
	printf("\n-Tirth Bharatiya");
	getch();
}
int mean()					//function definition
{
	int a[8],c=0,sum=0,i,n=0,m,sm,sbm,srt,d=0;
	for(i=1;i<=8;i++)
	{
		scanf(" %2d ",&a[i]);
	}
	printf("\n\n\n");
	for(i=1;i<=8;i++)
	{
		printf(" %2d ",a[i]);
		sum=sum+a[i];
		c++;
	}
	m=sum/c;
	printline();
	printline();
	printf("\n\n Entered values Mean is: %2d ",m);
	for(i=1;i<=8;i++)
	{
		sm=(a[i]-m);
		n=n+(sm*sm);
		d++;
	}
	sbm=n/d;
	printf("\n Entered Substract the mean: %2d ",sbm);
	srt=sqrt(sbm);
	printf("\n Square root is: %2d",srt);
	return srt;
}
void printline()				//function definition
{
	printf("\n-------------------------------------------------------------");
}
