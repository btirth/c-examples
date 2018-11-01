#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,j,sum=0,ans=1,n;
	clrscr();
	printf("enter the no. of rows=");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<i;j++)
		{
			printf("      ");
		}
		for(k=n;k>=i;k--)
		{       sum=ans;
			ans=ans+sum;
			printf("        %4d",sum);
		}
		printf("\n");
	}
	printf("\n-Tirth Bharatiya");
	getch();
}
