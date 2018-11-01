/*a program to create a file named ALPHABETS which consists of all 26 letters ABC…XYZ 
and prints the contents of the file in reverse order ZYX….CBA on the screen. Use the 
function ftell(), fseek() and rewind()*/

#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f1, *f2;
	char name[10],ch1,ch2;
	int i,j=1,length;
	clrscr();

	f1=fopen("abc.txt","r");
	while(!feof(f1))
	{
		ch1=getc(f1);
		printf("%c",ch1);
	}

	printf("\nEnter the name of the file => ");
	scanf("%s",name);

	f2=fopen(name,"w");

	fseek(f1,0,SEEK_END);
	length=ftell(f1);
	rewind(f1);

	while(j!=length+1)
	{
	    fseek(f1,length-j,SEEK_SET);
	i=ftell(f1);
		//printf("\n%d",i);
		ch1=getc(f1);
		printf("%c",ch1);
		putc(ch1,f2);
		j++;

	}
	rewind(f2);

	printf("\nContent copied \n");

	fclose(f1);
	fclose(f2);
	    printf("\n-Tirth Bharatiya");

	getch();
	return 0;
}
