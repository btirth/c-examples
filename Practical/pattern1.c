#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;      	  //n=no. of rows user want
		                  //i is no. of rows
			          //j is no. of column
	clrscr();
	printf("\n\nEnter no of rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	printf("-Tirth Bharatiya")
}