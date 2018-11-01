/*to copy one string to another without strcpy*/

#include<stdio.h>
#include<conio.h>
char *copy (char*,char *);
int main()
{
	char *str;
	char source[] = "Kindness";
	char target[10];
	clrscr();
	str=copy(target,source);
	printf("%s\n",str);
	printf("\n\n18DCS008");
	printf("\n-Tirth Bharatiya");
	getch();
}
char *copy(char *t,char *s)
{
	char * r;
	r = t;
	while(*s!='\0')
	{
		*t=*s;
		t++;
		s++;
	}
	*t='\0';
	return(r);
}
