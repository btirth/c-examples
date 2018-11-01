#include<stdio.h>		//standard input and output
#include<conio.h>		//console input and output
#include<string.h>		//header file for strings related function are included

void main()
{
	char str1[100],str2[100];		//str1 and str2 is array 
	int i,j,lenth1,lenth2,temp,flag;
	clrscr();
	printf("\nEnter string 1: ");
	gets(str1);		//it work regarding to scan the character
	printf("Enter string 2: ");
	gets(str2);				//it work regarding to scan the character
	lenth1=strlen(str1);
	lenth2=strlen(str2);
	printf("\nLenth of string 1: %d",lenth1);
	printf("\nLenth of string 2: %d",lenth2);
	if(lenth1!=lenth2)		//condition statement
	{
		printf("\nstring1 and string2 are not permutation to each other");
	}
	else
	{
		for(i=0;i<=lenth1;i++)		//for loop
		{
			for(j=0;j<=lenth1-1;j++)		//nested for loop
			{
				if(str1[j]>str1[j+1])	//condition statement
				{
					temp=str1[j+1];
					str1[j+1]=str1[j];
					str1[j]=temp;
				}
			}
		}
		for(i=0;i<=lenth2;i++)		//for loop
		{
			for(j=0;j<=lenth2-1;j++)		//nested for loop
			{
				if(str2[j]>str2[j+1])		//condition statement
				{
					temp=str2[j+1];
					str2[j+1]=str2[j];
					str2[j]=temp;
				}
			}
		}
		for(i=0;i<=lenth1;i++)		//for loop
		{
			if(str1!=str2)		//condition statement
			{
				flag=0;
				break;
			}
		}
		if(flag==1)		//condition statement
		{
			printf("\nstrings are not permutation each other");
		}
		else
		{
			printf("\nstringslenth are same but not permutation to each other");
		}
	}
		printf("\n-Tirth Bharatiya");
	getch();
}
