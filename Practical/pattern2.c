#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,sum=64,k;
	clrscr();
	printf("enter the number of row=");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(k=5;k>i;k--);
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			sum=sum+1;
			printf("  %c",sum);
		}
		printf("\n");
	}
	printf("\n-Tirth Bharatiya");
	getch();
}
