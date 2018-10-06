/*We say that a string 's' is an anagram of another string 't' if the
letters in 's' can be rearranged to form 't'.

For example, "butterfly" is an anagram of "flutterby", since a
rearrangement of the first word results in the second.

We say that a position 'i' in 's' and 't' match, if 's' is an anagram of
't', and s[i]==t[i].

In this question, you will be given two words, 's' and 't'. You have
to output the number of matching positions if s is an anagram of t,
and -1 if s is not an anagram of t.

Input
-----
The input consists of two lines. The first line contains the first
string, with length <= 100 characters. The second line contains the
second string, with length <= 100 characters.

Output
------
If the first string is an anagram of the second string, then output
the number of matching positions. Otherwise, print -1.

Sample Input 1
--------------
butterfly
flutterby

Sample Output 1
---------------
2

Sample Input 2
--------------
home
come

Sample Output 2
---------------
-1     
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int anagram();
void main()
{
	char s[100],p[100];
	int i,count=0;               //count=the number of matching positions
 	int flag=0;
	scanf("%s",s);               //scan string 's'
	scanf(" %s",p);              //scan string 'p'
	for(i=0;i<strlen(s);i++)     //to find the number of matching positions
	{
		if(s[i]==p[i])
		{
			count++;

		}

	}
	flag=anagram(s,p,flag);        //to check 's' is an anagram of 't'

	if(flag==0)
	{
		printf("%d",count);
	}
	else
	{
		printf("-1");
	}
	getch();
}
int anagram(char s[],char p[],int flag)         //to check 's' is an anagram of 't'

{
	int j,flag1=0,i;
	for(j=0;j<strlen(p);j++)        //to check all element of 'p' is present in 's' or not
	{
		for(i=0;i<strlen(s);i++)       
		{
			if(p[j]==s[i])       
			{
				flag1=0;
				break;                   
			}
			else
			{
				flag1=1;
			}

		}
		if(flag1==1)
		{
			flag=1;
			break;
		}
	}
	return flag;
}