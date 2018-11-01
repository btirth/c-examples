/*to count number of students get distinction,first class,pass,fail*/

#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,fail=0,pass=0,first_class=0,distinction=0,marks[10],*x;
   clrscr();
   printf("Enter marks of student :\n");
   for(i=0,x=&marks[0];i<10,x<&marks[10];x++,i++)
   {
	scanf("%d",&marks[i]);
	if(*x>=70)
		distinction++;
	else if(*x>=60&&*x<70)
		first_class++;
	else if(*x>=40&&*x<60)
		pass++;
	else
		fail++;
   }
   printf("Distinction= %d\nFirst Class= %d\nPass= %d\nFail= %d\n",distinction,first_class,pass,fail);
   printf("\n-Tirth Bharatiyta");
   getch();
}
