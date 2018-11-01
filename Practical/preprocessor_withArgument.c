/*a program to calculate area of two circle. (pr2). 
Use Preprocessor directive named macro expansion for the symbol p (Symbolic Constant) with argument*/

#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define area(x)(PI*x*x)
void main()
{
	int r1,r2,a1,a2;
	clrscr();
	printf("Enter r1= ");
	scanf("%d",&r1);
	printf("Enter r2= ");
	scanf("%d",&r2);
	printf("Area A1 is= %d",a1);
	printf("\nArea A2 is= %d ",a2);
	printf("\n\n\n\t\t\t-TirthBharatiya");
	getch();
}
