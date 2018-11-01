/*a program to pass a number entered through keyboard as an argument to 
user-defined functions and find the factors of a number and check whether 
the factors are prime or not*/


#include<stdio.h>
#include<conio.h>
int factor(int n,int i)             //to find factors of gibven number
{
	int j=1;
	void prime(int i,int j);
	printf("\nFactors are=\n");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d---",i);
			prime(i,j);
		}
	}
      return i;
}
void prime(int i,int j)       //to factors are prime or not.
{
	int count=0;
	for(j=1;j<i;j++)
	{
		if(i%j==0)
		{
			count++;
		}
	}
	if(count>2)
	{
		printf("Not prime\n");
	}
	else
	{
		printf("Prime\n");
	}
}
void main()
{
	int n,i=1;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&n);
	factor(n,i);
	printf("\n-Tirth Bharatiya");
	getch();
}
