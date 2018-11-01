#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,j,sum=-1,n;
	clrscr();
	printf("enter the no. of rows=");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<i;j++)
		{
			printf("  ");
		}
		for(k=5;k>=i;k--)
		{
			sum=sum+2;
			printf(" %3d",sum);
		}
		printf("\n");
	}
	printf("\n-Tirth Bharatiya");
	getch();
}
