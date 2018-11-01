/*Define a structure called Result for students. Structure will have members like Roll 
number, marks for three subjects and total of three subjects. Write a program to enter 
data for 5 students and display the merit list of students. Use Array of Structures. 
For example, if Roll No and marks of three subjects of each student are entered through 
the keyboard, the output should look like the following:*/

#include<stdio.h>
#include<conio.h>
struct result
{
	int roll_no;
	int sub1;
	int sub2;
	int sub3;
	int total;
};
void main()
{
	struct result roll_no[5],temp;
	int i,j;
	clrscr();
	//scan roll no. and marks of student
	for(i=0;i<5;i++)
	{
		printf("Roll_No: ");
		scanf("%d",&roll_no[i].roll_no);
		printf("Sub1: ");
		scanf("%d",&roll_no[i].sub1);
		printf("Sub2: ");
		scanf("%d",&roll_no[i].sub2);
		printf("Sub3: ");
		scanf("%d",&roll_no[i].sub3);
		roll_no[i].total=roll_no[i].sub1+roll_no[i].sub2+roll_no[i].sub3;
		printf("\n");
	}
	//sort total marks
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(roll_no[j+1].total>roll_no[j].total)
			{
				temp=roll_no[j+1];
				roll_no[j+1]=roll_no[j];
				roll_no[j]=temp;
			}
		}
	}
	printf("Roll No. :  Sub1 : Sub2 : Sub3 : Total\n");
	for(i=0;i<5;i++)
	{
		printf("%3d      :   %3d : %3d  : %3d  : %3d\n",roll_no[i].roll_no,roll_no[i].sub1,roll_no[i].sub2,roll_no[i].sub3,roll_no[i].total);
	}
	printf("\n-Tirth Bharatiya");
	getch();
}
