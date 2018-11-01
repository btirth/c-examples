/*a program that takes contents of a file and copy them into another file 
and print it on the screen. Use feof () functions to detect the end of file 
and ferror() function to detect if there is an error in opening the file*/

#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *f1,*f2;
	char c;
	clrscr();
	f1=fopen("tirth.txt","r");
	if(f1==NULL)
	{
		printf("File can not open");
	}
	f2=fopen("tirthnew.txt","w");
	while((c=fgetc(f1))!=EOF)
	{
		fputc(c,f2);
	}
	if(f2!=NULL)
	{
		printf("\n\nCopy successfully");
	}
	else
	{
		printf("\n\nCopy not successfully");
	}
	fclose(f1);
	fclose(f2);
	printf("\n-Tirth Bharatiya");
	getch();
}
