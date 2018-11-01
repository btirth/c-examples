/*addition,substracion,increment,swaping,max,min using pointer integer*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,*ptr1,*ptr2,temp,sum,subtraction;
	clrscr();
	printf("Enter number1 : ");
	scanf("%d",&n1);
	printf("Enter number2 : ");
	scanf("%d",&n2);
	ptr1=&n1;
	ptr2=&n2;
	printf("\n------Addition------");
	sum=*ptr1 + *ptr2;
	printf("sum= %d\n",sum);
	printf("\n------Substraction------\n");
	subtraction=*ptr1 - *ptr2;
	printf("subtraction= %d\n",subtraction);
	printf("\n-------Increment------");
	*ptr1 = *ptr1 + 1;
	*ptr2 = *ptr2 + 1;
	printf("num1=%d\nnum2=%d\n",*ptr1,*ptr2);
	printf("\n------Swaping------");
	temp=*ptr2;
	*ptr2=*ptr1;
	*ptr1=temp;
	printf("num1=%d\nnum2=%d\n",*ptr1,*ptr2);
	printf("\n------Max & Min------");
	if(*ptr1>*ptr2)
	{
		printf("max=%d\nmin=%d",*ptr1,*ptr2);
	}
	else
	{
		printf("max=%d\nmin=%d",*ptr2,*ptr1);
	}
	printf("\nadd1= %d\n",ptr1);
	printf("\nadd2= %d",ptr2);
	printf("\n-Tirth Bharatiya");
	getch();
}
