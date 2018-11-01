/* to sort elements of an array in ascending order using Bubble Sort */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,j,temp;
	clrscr();
	printf("enter the length of array=");
	scanf("%d",&n);
	printf("Enter the elements of array=\n");
	for(i=0;i<n;i++)				//scan the value of array
	{
		scanf("%d",&a[i]);
	}
	//sort array
for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - ");
	printf("\nsorted array is:\n");        		//print sorted array
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n-Tirth Bharatiya");	
           getch();
}
