/*to find maximum and minimum value of array and find index of given specific element*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],i,n,max=0,min=arr[0],x;
	clrscr();
	printf("enter the length of array=");
	scanf("%d",&n);
	for(i=0;i<n;i++)                    //to input the value of array
	{
		printf("enter number: ");
		scanf("%d",&arr[i]);

	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)              //to find max value of array
		{
			max=arr[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];

		}
	}
	printf("\nMaximum value is:%d",max);
	printf("\nMinimum value is:%d",min);
	printf("\n\nenter the value of array to find the index=");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==arr[i])
		{
			printf("Index is arr[%d]",i);
		}
	}
	printf("\n-Tirth Bharatiya");
	getch();
}
