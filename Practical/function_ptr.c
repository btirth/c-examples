/*function pointer*/

#include<stdio.h>
void display();
int main()
{
	void(*func_ptr)();
	clrscr();
	func_ptr=display;
	printf("Address of function display %u\n",func_ptr);
	(*func_ptr)();
	printf("\n-Tirth Bharatiya");
	getch();
}
void display()
{
	puts("By helping others,we help overselves!!");
}
