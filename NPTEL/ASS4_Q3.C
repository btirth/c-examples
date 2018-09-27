/*a program that replaces the occurence of a given character (say c)
in a primary string (say PS) with another string (say s)*/
#include<stdio.h>
#include<conio.h>   //to use strlen() function
void main()
{
	char ps[100]; 
	char c;
	char s[10];
	int i=0;
	scanf("%s", ps);   //to scan primary string
	scanf("%s",&c);    //to scan character 
	scanf("%s",&s);    //scan string 
	for(i=0;i<strlen(ps);i++)  //to print final string
	{
		if(ps[i]==c)
			printf("%s",s);
		else
		printf("%c",ps[i]);
	}
	getch();
}