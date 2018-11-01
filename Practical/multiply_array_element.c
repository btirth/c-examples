/*to multiply 3 with each element of array */

#include<stdio.h>
#include<conio.h>
void modify (int a[]);
void main()
{
	int ar[10],i;
	clrscr();
	printf("\n\nEnter the array of Element \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&ar[i]);
	}
	modify(ar);
	printf("\nYour modify array is: \n");
	for(i=0;i<10;i++)
	{
		printf("  %d\n",ar[i]);
	}
	printf("\n-Tirth Bharatiya");

	getch();
}
void modify(int a[])
{
	int i;
	for(i=0;i<10;i++)
	{
		a[i]=a[i]*3;
	}
}
