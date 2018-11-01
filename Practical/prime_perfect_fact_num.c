/*to check input number is prime or perfect number and the factorial number of given number*/


#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int i=2,n,m,o,option,flag=0,sum=0,factorial=1,j=1,k=1;
	do
	{
		printf("\n\n1.Prime or not\n");
		printf("2.Perfect number or not\n");
		printf("3.Factorial of a number\n");
		printf("4.Exit\n");
		printf("Choose Option=");
		scanf("%d",&option);
switch(option)
		{
			case 1 :
			printf("Enter a number=");
			scanf("%d",&n);
			while(i<n&&flag==0)
			{
				if(n%i==0)
				{
					printf("\nNot Prime");
					flag=1;
				}
				i++;
			}
			if(flag==0)
			{
				printf("\nPrime");
			}
			break;
			case 2 :
			printf("Enter a number=");
			scanf("%d",&m);
			while(j<m)
			{
				if(m%j==0)
				{
					sum=sum+j;
				}
				j++;
			}
			printf("\nsum=%d",sum);
			if(sum==m)
			{
				printf("\nPerfect number");
			}
			else
			{
				printf("\nNot perfect  number");
			}
			break;

			case 3 :
			printf("Enter a number=");
			scanf("%d",&o);
			while(k<=o)
			{
				factorial=factorial*k;
				k++;
			}
				printf("\nfactorial=%d",factorial);
			break;
		}
	}
			while(option!=4);
	printf("\n-Tirth Bharatiya");
	getch();
}
