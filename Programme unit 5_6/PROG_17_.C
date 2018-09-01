#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float x,y,t,a,r;
	clrscr();
		printf("Enter the coordinates=");
	scanf("%f,%f",&x,&y);
	a=(x*x)+(y*y);
	r=sqrt(a);
	t=atan(y/x);
	printf("(r,theta)=");
	printf("(%.2f,%.2f)",r,t);
	getch();

}