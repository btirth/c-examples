/*Twenty-five numbers are entered from the keyboard into an array. The number to be searched 
is entered through the keyboard by the user. Write a program to find if the number to be searched
is present in the array and if it is present, display the number of times it appears in the array.*/


#include<stdio.h>
#include<conio.h>

void main()
{
	int i,arr[25],n,count=0;
	clrscr();
	
	//to enter 25 numbers
	for(i=0;i<25;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//enter the number for search
	printf("Enter the number for search : ");
	scanf("%d",&n);
	
	//find the enter number is present in array or not and if present then how many times appears in array
	for(i=0;i<25;i++)
	{
		if(n==arr[i])
		{
			count++;
		}
	}
	if(count!=0)
	{
		printf("\nNumber is present in array");
		printf("\n%d times it appears in array",count);
	}
	else
	{
		printf("\nnumber is not present in array");
	}
	getch();

}
