/*Write a program to find the grace marks for a student using Switch Statement. 
The user should enter the class obtained by the student and the number of subjects he has failed in.
1. If the student gets first class and the number of subjects he failed in is greater than 3,
   then he does not get any grace. If the number of subjects he failed in is less than or equal 
   to 3 then the grace is of 5 marks per subject.
2. If the student gets second class and the number of subjects he failed in is greater than 2, 
   then he does not get any grace. If the number of subjects he failed in is less than or equal 
   to 2 then the grace is of 4 marks per subject.
3. If the student gets third class and the number of subjects he failed inis greater than 1,  
   then he does not get any grace. If the number of subjects he failed in is equal to 1 then 
   the grace is of 5 marks per subject
*/


#include<stdio.h>
#include<conio.h>
void main()
{
	int fail;
	char class;
	clrscr();
	printf("Enter class=");
	scanf("%ch",&class);
	printf("Enter the number of failed sub=");
	scanf("%d",&fail);
	switch(class)       // no ';' after switch 
	{
		case'f':  // ':' is after case condition
		  if(fail>3)
		  {
			  printf("Not get any grace");
		  }
		  else
		  {
			  printf("The grace is of 5marks per subject");
		  }
		  break;  //compulsary break after any case
		case's':
		  if(fail>2)
		  {
			printf("Not get any grace");
		  }
		  else
		  {
			printf("The grace is of 4marks per subject");
		  }
		  break;
		case't':
		  if(fail>1)
		  {
			printf("Not get any grace");
		  }
		  else
		  {
			printf("The grace is of 5marks per subject");
		  }
		  break;

      }
      printf("\n\t\t\t-Tirth Bharatiya");
      getch();
}
