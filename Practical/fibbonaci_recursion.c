/*to generate Fibonacci series using Recursive Function*/

#include<stdio.h>
#include<conio.h>
int fibb(int i)
{
	if(i<2)
	{
		return 1;
	}
		return fibb(i-1)+fibb(i-2);
}
void main()
{
	int n,i=1;
	printf("Enter the no. of terms=");
	scanf("%d",&n);
	printf("fibonacci series is:");
	for(i=1;i<=n;i++)
	{
		printf("%d ",fibb(i));
	}
	getch();
}
