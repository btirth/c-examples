#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char str[100];
	int i,count=1,max=1;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==str[i+1])
		{
			count++;
		}
		else
		{
			if(count>=max)
			{
				max=count;
			}
			count=1;

		}
	}

	printf("%d",max);
	getch();
}