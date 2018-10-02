#include<stdio.h>
#include<conio.h>
#include<string.h>
void printline();
int charges_car();
int charges_bike();
int charges_cycle();
void print_line();


struct data
{
	int day;
	int month;
	int year;
	int name;
	int hours;
	int minutes;
};
void main()
{
	struct data owner;
	int choice,pay,t,car=0,bike=0,cycle=0,rup1=0,rup2=0,rup3=0,total_veh,total_amo,mob[10];
	int amount1=0,amount2=0,amount3=0;	          //amount1=gain amount from cars
							  //amount2=gain amount from 2 wheelers
							  //amount3=gain amount from cycles
	int i=0,n,c;
	char name[50],num_plate[10];
	char pword[15],uname[15];
	clrscr();
	printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb        VEHICLE PARKING MANAGEMENT             \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb               Brought To You By-              \xdb\n");
	printf("\t\t\xdb                Tirth Bharatiya                \xdb\n");
	printf("\t\t\xdb                 Vikas Marwadi                 \xdb\n");
	printf("\t\t\xdb                 Adnan Mistry                  \xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb            CONTACT US:9106321002              \xdb\n");
	printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");
	printf("Press any key to continue...");
	getch();
	clrscr();
	while(1)
	{
		printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  LOGIN FIRST  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
		printf(" \n\n                       ENTER USERNAME:-");
		scanf("%s", &uname);
		printf(" \n\n                       ENTER PASSWORD:-");
		while(i<10)
		{
			pword[i]=getch();
			c=pword[i];
			if(c==13) break;
			else printf("*");
			i++;
		}
		pword[i]='\0';
		//char code=pword;
		i=0;
		//scanf("%s",&pword);
		if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
		{
			printf("  \n\n\n       WELCOME !! YOUR LOGIN IS SUCCESSFUL");
			printf("\n\n\n\t\t\t\tPress any key to continue...");
			getch();//holds the screen
		}
		else
		{
			printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
			getch();//holds the screen
			break;
		}
		clrscr();
		printf ( "\n\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb VEHICLE PARKING \xdb\xdb\xdb\xdb\xdb\xdb\xdb\n" ) ;
		printf ( "\n\t1>> Arrival Of Car\n" ) ;
		printf ( "\n\t2>> Arrival Of 2 Wheelers\n" ) ;
		printf ( "\n\t3>> Arrival Of cycle\n" ) ;
		printf ( "\n\t4>> Show Status\n" ) ;
		printf ( "\n\t5>> Departure of Vehicle\n" ) ;
		printf ( "\n\t6>> Exit\n" ) ;
		printf ("\n\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
		printf(" \n\n Enter Your Choice Here:");
		scanf ( "%d", &choice ) ;
		clrscr();
		switch(choice)
		{
			case 2:
			     printline();
			     printf("\n\t\t\t TWO WHEEL PARKING");
			     printline();
			     printf("\nName      -> ");
			     scanf("%s", name);
			     printf("Plate No. -> ");
			     scanf("%s" ,num_plate);
			     printf("Mobile No.-> ");
			     scanf("%s", mob);
			     printf("Date      -> ");
			     scanf("%2d/%2d/%4d",&owner.day,&owner.month,&owner.year);
			     printf("Time      -> ");
			     scanf("%2d:%2d",&owner.hours,&owner.minutes);
			     print_line();
			     printline();
			     printf("\n\t\t\tCHARGES FOR PARKING");
			     rup2=charges_bike();
			     printline();
			     clrscr();
			     printline();
			     printf("\n\t\t\t  PAYMENT RECEIPT");
			     printline();
			     printf("\nName\t     : \t%s\nPlate No.    :  %s \nMobile number:  %s\nDate\t     :\t%2d/%2d/%4d\nTime\t     :\t%2d:%2d\nAmount\t     :\t%2d",name,num_plate,mob,owner.day,owner.month,owner.year,owner.hours,owner.minutes,rup2);
			     print_line();
			     printf("\n\t\t\t%c %c THANK YOU FOR CHOOSE OUR SERVICE %c %c",1,1,1,1);
			     print_line();
			     bike++;
			     amount2=amount2+rup2;
			     getch();
			     clrscr();
			     break;
			case 1:
			     printline();
			     printf("\n\t\t\t   CAR PARKING");
			     printline();
			     printf("\nName      -> ");
			     scanf("%s", name);
			     printf("Plate No. -> ");
			     scanf("%s", num_plate);
			     printf("Mobile No.-> ");
			     scanf("%s",&mob);
			     printf("Date      -> ");
			     scanf("%2d/%2d/%4d",&owner.day,&owner.month,&owner.year);
			     printf("Time      -> ");
			     scanf("%2d:%2d",&owner.hours,&owner.minutes);
			     print_line();
			     printline();
			     printf("\n\t\t\tCHARGES FOR PARKING");
			     rup1=charges_car();
			     clrscr();
			     printline();
			     printf("\n\t\t\t  PAYMENT RECEIPT");
			     printline();
			     printf("\nName\t     : \t%s\nPlate No.    :  %s \nMobile number:  %s\nDate\t     :\t%2d/%2d/%4d\nTime\t     :\t%2d:%2d\nAmount\t     :\t%2d",name,num_plate,mob,owner.day,owner.month,owner.year,owner.hours,owner.minutes,rup1);
			     print_line();
			     printf("\n\t\t\t%c %c THANK YOU FOR CHOOSE OUR SERVICE %c %c",1,1,1,1);
			     print_line();
			     car++;
			     getch();
			     amount1=amount1+rup1;
			     clrscr();
			     break;
			case 3:
			     printline();
			     printf("\n\t\t\t  CYCLE PARKING");
			     printline();
			     printf("\nName      -> ");
			     scanf("%s", name);
			     printf("Mobile No.-> ");
			     scanf("%s",&mob);
			     printf("Date      -> ");
			     scanf("%2d/%2d/%4d",&owner.day,&owner.month,&owner.year);
			     printf("Time      -> ");
			     scanf("%2d:%2d",&owner.hours,&owner.minutes);
			     print_line();
			     printline();
			     printf("\n\t\t\tCHARGES FOR PARKING");
			     rup3=charges_cycle();
			     clrscr();
			     printline();
			     printf("\n\t\t\t  PAYMENT RECEIPT");
			     printline();
			     printf("\nName\t     : \t%s\nMobile number:  %s\nDate\t     :\t%2d/%2d/%4d\nTime\t     :\t%2d:%2d\nAmount\t     :\t%2d",name,mob,owner.day,owner.month,owner.year,owner.hours,owner.minutes,rup3);
			     print_line();
			     printf("\n\t\t\t%c %c THANK YOU FOR CHOOSE OUR SERVICE %c %c",1,1,1,1);
			     print_line();
			     cycle++;
			     getch();
			     amount3=amount3+rup3;
			     clrscr();
			     break;
			case 4:
			     total_veh=car+bike+cycle;
			     total_amo=amount1+amount2+amount3;
			     printf("Status");
			     printf("\nTotal number of cars:\t\t%3d",car);
			     printf("\nTotal number of 2 wheelers:\t%3d",bike);
			     printf("\nTotal number of cycles:\t\t%3d",cycle);
			     printf("\n\n\nTotal number of vehicles:\t%3d",total_veh);
			     printf("\nTotal gain amount:\t\t%3d",total_amo);
			     getch();
			     clrscr();
			     break;
			case 5:
			     printf ( "\n\t1>> Departure Of car\n" ) ;
			     printf ( "\n\t2>> Departure Of 2 wheelers\n" ) ;
			     printf ( "\n\t3>> Departure Of cycle\n" ) ;
			     scanf("%d",t);
			     if(t==1)
			     {
				    car=car-1;
			     }
			     if(t==2)
			     {
				    bike=bike-1;
			     }
			     if(t==3)
			     {
				    cycle=cycle-1;
			     }
			case 6:
			     exit (0);
			     break;

		}
	 }
}
int charges_bike()
{
	int pay1,i;
	printline();
	printf("\n1.CHARGES FOR 12 HOURS: Rs.25\n\t\t\t\t ");
	printf("\n2.CHARGES FOR MORE THAN 12 HOURS: Rs.40\t ");
	printf("\n\nEnter your choice:");
	scanf("%d",&i);
	if(i==1)
	{
		pay1=25;
	}
	if(i==2)
	{
		pay1=40;
	}
	printline();
	return pay1;
}
int charges_car()
{
	int pay2,i;
	printline();
	printf("\n1.CHARGES FOR 12 HOURS: Rs.90\n\t\t\t\t ");
	printf("\n2.CHARGES FOR MORE THAN 12 HOURS: Rs.150\t ");
	printf("\n\nEnter your choice:");
	scanf("%d", &i);
		if(i==1)
	{
		pay2=90;
	}
	if(i==2)
	{
		pay2=150;
	}
	printline();
	return pay2;
}
int charges_cycle()
{
	int pay3,i;
	printline();
	printf("\n1.CHARGES FOR 12 HOURS: Rs.5\n\t\t\t\t ");
	printf("\n2.CHARGES FOR MORE THAN 12 HOURS: Rs.10\t ");
	printf("\n\nEnter your choice:");
	scanf("%d",&i);
	if(i==1)
	{
		pay3=5;
	}
	if(i==2)
	{
		pay3=10;
	}
	printline();
	return pay3;
}
void printline()
{
	printf ("\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n" ) ;
}
void print_line()
{
	int n;
	printf("\n");
	for(n=19;n<99;n++)
	printf("_");
}
