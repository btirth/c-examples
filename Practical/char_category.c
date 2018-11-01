/* to input a character using getchar() and print the character using putchar() and check the character category */
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char c,p;             //c is input character
			      //p is output character
	clrscr();
	printf("Enter input=");
	c=getchar();
	if(isalnum(c)&&isprint(c))
	{
		printf("alphanumeric\n");
		if(isalpha(c)&&isprint(c))
		{
			printf("alphabet\n");
			if(isupper(c)&&isprint(c))
			{
				printf("Uppercase\n");
				p=tolower(c);
				putchar(p);
			}
			if(islower(c)&&isprint(c))
			{
				printf("Lowercase\n");
				p=toupper(c);
				putchar(p);
			}
		}
		if(isdigit(c)&&isprint(c))
		{
			printf("Digit\n");
		}
	}
	if(ispunct(c)&&isprint(c))
	{
		printf("punctuation\n");
	}
	if(isspace(c))
	{
		printf("Space\n");
	}
	printf("\n-Tirth  Bharatiya");
	getch();
}
