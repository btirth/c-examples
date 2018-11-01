/*three points (x1, y1), (x2, y2) and (x3, y3), a program 
to check ifall the three points fall on one straight line. 
Use fabs() function of <maths.h> header file*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x1,x2,x3,y1,y2,y3,v;
	clrscr();
	printf("Enter first cordinate:");
	scanf("%d,%d",&x1,&y1);
	printf("Enter second cordinate:");
	scanf("%d,%d",&x2,&y2);
	printf("Enter third cordinate:");
	scanf("%d,%d",&x3,&y3);
	v=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
	printf("\nv is %d",v);
	if(v==0)
	{
	 printf("\nThe points are collinear");
	}
	else
	{
	 printf("\nThe points are non_collinear");
	}
	getch();
}
