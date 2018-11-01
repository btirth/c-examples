/* a program using to store a character string in a block of memory space created by 
calloc () and then modify the same to store a larger string using realloc () function*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	char *ptr,*p1,*ptr1;
	int  i,n;
	clrscr();
	printf("\n\nEnter value: ");
	scanf("%d",&n);
	ptr=(char*)calloc(n,sizeof(char));
	printf("\nEnter name: ");
	
	gets(ptr);
	printf("\nEntered name is..");
	puts(ptr);
	printf("-------------------------------------------")      ;
	printf("\n\nEnter new size: ");
	scanf("%d",&i);
	ptr1=(char*)realloc(ptr,i);
	printf("\nEnter your new name : ");
	gets(ptr1);
	printf("\n\nEntered new name is ");
	puts(ptr1);
	printf("-------------------------------------------------");
	printf("\n-Tirth Bharatiya");
	getch();
}
