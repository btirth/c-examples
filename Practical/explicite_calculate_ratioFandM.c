/*Input No of female and No of male and calculate the ratio of females
to males in a town. No of female and No of male are in int and ratio is
in float. (For Ex. No_of_Female = 10 & No_of_Male = 7 then ratio =1.43).
Explicit type Conversion
*/

#include<stdio.h>
#include<conio.h>
main()
{

	float r,f,m;
	clrscr();
	printf("No of female ");
	scanf("%f",&f);
	printf("No of male ");
	scanf("%f",&m);
	r=f/m;
	printf("The ratio of female to male in a town  is %.2f",r);
	printf("\n\n\n\t\t-Tirth Bharatiya");
	getch();
}
