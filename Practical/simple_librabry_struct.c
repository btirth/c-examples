#include<stdio.h>
#include<conio.h>
struct book
{
	char title[20];
	int accession_number;
	int price;
	int flag;
} ;
void main()
{
	struct book book1;
	clrscr();
	//book accession number
	printf("Enter accession number: ");
	scanf("%d",&book1.accession_number);
	//book title
	printf("Title: ");
	scanf("%s",&book1.title);
	//book price
	printf("Price: ");
	scanf("%d",&book1.price);
	//to check books is issued or not
	printf("0 if books is not issued and 1 if book is issued  ");
	scanf("%d",&book1.flag);
	//to print info of book
	printf("\n\naccession number is %d\ntitle of book is %s\nprice of book is %d\n",book1.accession_number,book1.title,book1.price);
	if(book1.flag==0)
		printf("Book is not issued");
	if(book1.flag==1)
		printf("Book is issued");
	printf("\n-Tirth Bharatiya");
	getch();
}
