/*If a five-digit number is input through the keyboard, write a program to print a new number
by adding one to each of its digits. For example if the number that is input is 12391 then the
output should be displayed as 23402.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	//ip is an input number

	int ip,digit,t=1,sum=0;
	clrscr();
	printf("Enter number=");
	scanf("%d",&ip);
	while(ip!=0)
	{
		digit=ip%10;
		ip=ip/10;
		sum=sum+(digit+1)*t;
		t=t*10;

	}
	printf("%d",sum);

	getch();

}