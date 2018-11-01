/*a program that uses an array of pointers to strings str[ ]. 
Receive two strings str1 and str2 and check if str1 is embedded in any 
of the strings in str[ ]. If str1 is found, then replace it with str2*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void replace();
void main()
{
	char *str[] ={
			"We will teach you how to...",
			"Move a mountain",
			"Level a building",
			"Erase the past",
			"Make a million",
			"...all through C !"
	      };
	char str1[80],str2[80];
	int i;
	clrscr();
	printf("\n\n");
	for(i=0;i<6;i++)
	{
		printf("\t%s\n",*(str+i));
	}
	printf("\n\n");
	printf("Enter the word to search: ");
	gets(str1);
	printf("\n\nEnter the word to replace: ");
	gets(str2);
	printf("----------------------------------------------------");
/*******************************************/
/* passing all strings to replace function */
/*******************************************/

	printf("\nAfter modification:\n\n");

	for(i=0;i<6;i++)
	{
		replace(*(str+i),str1,str2);
	}
	printf("\n-Tirth Bharatiya");
	getch();
}
void replace(char *s, char s1[80], char s2[80])
{
	int i=0,j=0,k=0;
	char temp[100],temp2[100],main[100],*t=temp;
	/* copying to temporary string */
	while(*s!='\0')
	{
		*t=*s;
		t++;
		s++;
	}
	*t='\0';
/**********************/
/* checking each word */
/**********************/
	while(temp[i]!='\0')
	{
		temp2[j]=temp[i];
		if(temp[i]==' ')
		{
			temp2[j]='\0';
			if(strcmpi(temp2,s1)==0)
			{
				strcpy(temp2,s2);
			}
			j=0;
			while(temp2[j]!='\0')
			{
				main[k]=temp2[j];
				k++;
				j++;
			}
			main[k]=' ';  /* adding space after each word is copied */
			k++;     /* increment so that the next word won't replace the space */
			j=-1;
		}
		i++;
		j++;
	}
	temp2[j]='\0';              /* last word terminated */
	if(strcmpi(temp2,s1)==0)
	{    /* checking last word too */
		strcpy(temp2,s2);
	}
	/***************************/
	/* last word of the string */
	/***************************/
	j=0;
	while(temp2[j]!='\0')
	{
		main[k]=temp2[j];
		k++;
		j++;
	}
	main[k]='\0';   	     /* new string is completely ready */
	printf("\t%s\n",main);       /* printing the new string */
}
