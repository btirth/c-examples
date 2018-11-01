/*If the three sides of a triangle are entered through the keyboard,
a program to check whether the triangle is valid or not. Thetriangle 
is valid if the sum of two sides is greater than the largest ofthe three sides*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,big;
	clrscr();
	printf("s1,s2,s3=");
	scanf("%d,%d,%d",&s1,&s2,&s3);
	if(s1>s2)
	{if(s1>s3)
	  {big=s1;
	printf("\nbig=%d",big);
	if(s1<(s2+s3))
	   {
	printf("\n\ntriangle is valid");
	   }
	else
	   {
	printf("\n\ntriangle is not valid");
	   }
	  }
	else
	   {big=s3;
	printf("\nbig=%d",big);
	if(s3<(s1+s2))
	    {
	printf("\n\ntriangle is valid");
	    }
	else
	    {
	printf("\n\ntriangle is not valid");
	    }
	   }
	}
	else
	{if(s2>s3)
	 {big=s2;
	printf("\nbig=%d",big);
	if(s2<(s1+s3))
	  {
	printf("\n\ntriangle is valid");
	  }
	else
	  {
	printf("\n\ntriangle is not valid");
	  }
	 }
	else
	 {big=s3;
	printf("\nbig=%d",big);
	if(s3<(s1+s2))
	  {
	printf("\n\ntriangle is valid");
	  }
	else
	  {printf("\n\ntriangle is not valid");}
			}
		}
	printf("\n\n\n\t\t\t-TirthBharatiya");

	getch();
 }
