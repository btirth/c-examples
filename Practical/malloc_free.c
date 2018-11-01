/*a program to enter N numbers into array and sort the second half of the array using 
function sort(). Enter the size of the array through keyboard. (Dynamic Array). 
Use malloc () to allocate memory and use free() to free the memory after the use.
For example if input is
5 13 24 67 45 34
Output should be
5 13 24 34 45 67
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//to short half element of array
void sort(int *p,int k)
{
	int i,j,temp;
	for(i=k/2;i<k;i++)
	{	
		for(j=k/2;j<k-1;j++)
		{       if((*(p+j))>((*(p+j+1))))
			{
				temp=*(p+j+1);
				*(p+j+1)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("\nNow sorting value is....\n\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",*(p+i));
	}
}
void main()
{
	int *ptr,*p1,i,n;
	clrscr();
	printf("\n\nEntyer the value of n: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	p1=ptr;
	printf("\nEnter value...\n");
	//scan the value
for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	sort(p1,n);
	printf("\n-Tirth Bharatiya");
	getch();
}
