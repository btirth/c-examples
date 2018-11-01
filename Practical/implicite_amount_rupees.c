/*Input an amount and convert it into rupees and paisa. (For Ex. 25.67 Rs = 25 Rs and 67 Paisa).(Implicit type Conversion)*/

#include<stdio.h>
#include<conio.h>
main()
{
	int rs,paisa;
	float amount;
	clrscr();
	printf("entre amount ");
	scanf("%f",&amount);
	rs=amount;
	printf("Rs is %d",rs);
	paisa=(amount-rs)*100;
	printf("\nPaisa is %d",paisa);
	printf("\n\n\n\t\t\t\t-Tirth Bharatiya");
	getch();
}
