/*Two files Data1 and Data2 contains sorted list of integers. Write 
a program to produce file Data3 which holds a single sorted, merge 
list of these two list. Use command line argument to specify the file name*/

#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1, *f2, *f3;
	int ch[100],i,j,total,temp;

	f1=fopen("DATA1.txt","r");

	i=0;
	while(!feof(f1))
	{
		ch[i]=getw(f1);
		i++;
	}
	fclose(f1);
	f2=fopen("DATA2.txt","r");

	while(!feof(f2))
	{
		ch[i]=getw(f2);
		i++;
	}
	count=i-1;
	for(i=0;i<count;i++)
	{
		for(j=0;j<count-1;j++)
		{
			if(ch[j]>ch[j+1])
			{
				temp=ch[j];
				ch[j]=ch[j+1];
				ch[j+1]=temp;
			}
		}
	}
	fclose(f2);
	f3=fopen("DATA3.txt","w");
	count++;
	i=0;
	while(i!=count)
	{
		putc(ch[i],f3);
		putc('\n',f3);
		i++;
	}
	fclose(f3);
	getch();
}
