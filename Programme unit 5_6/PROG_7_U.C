/*If a five-digit number is input through the keyboard, write a program to calculate the sum ofits digits. 
(Hint: Use the modulus operator ‘%’)*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	//ip is an input number
	//sum of digit is stored in 'sum'

	int ip,sum=0,digit;
	clrscr();
	printf("Enter number=");
	scanf("%d",&ip);
	while(ip!=0)
	{
		digit=ip%10;
		sum=sum+digit;
		ip=ip/10;
	}
	printf("sum=%d",sum);
	getch();

}