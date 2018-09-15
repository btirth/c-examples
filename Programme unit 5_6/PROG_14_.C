/*The paper of size A0 has dimensions of 1189 mm * 841 mm. Each subsequent size A(n) is
defined as A(n-1) cut in half parallel to its shorter sides. Thus paper of size A1 would have
dimensions 841 mm * 594 mm. Write a programme to calculate and print paper sizes A0,
A1, A2,…A8.*/
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