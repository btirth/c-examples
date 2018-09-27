/*Given two arrays of integers output the smallest number in the
first array not present in the second one.

Input Specification: 
The first line contains the size N1 of the first array.
Next line give the contents of the first array.
Next line contains the size N2 of the second array.
Next line give the contents of the second array.

Output Format:
Output must be a single number which is the smallest number occurring
in the first array that does not occur in the second. In case there is
no such number, output NO.

Variable Constraints:
The sizes of the arrays are smaller than 20.
Each array entry is an integer which fits an int data type.

Example:
Input:
3
2 3 4
4
1 3 5 7

Output: 2*/



#include<stdio.h>

void main()
{
	int j,temp,arr1[20],i=0,arr2[20],n1,n2,min=2147483647,flag=0;
	scanf("%d",&n1);    //scan size of first array
		for(i=0;i<n1;i++)
		{
			scanf("%d",&arr1[i]);     //scan value of  first array
		}
	for(i=0;i<n1;i++)
		for(j=0;j<n1;j++)
		{
			if(arr1[j]>arr1[j+1])
			{
				temp=arr1[j+1];
				arr1[j+1]=arr1[j];
				arr1[j]=temp;
			}
		}

	scanf("%d",&n2);    //scan size of second array
	for(i=0;i<n2;i++)
		scanf("%d",&arr2[i]);    //scan value of second array
	for(i=0;i<n2;i++)
		for(j=0;j<n2;j++)
		{
			if(arr2[j]>arr2[j+1])
			{
				temp=arr2[j+1];
				arr2[j+1]=arr2[j];
				arr2[j]=temp;
			}
		}

	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(arr2[j]==arr1[i])
			break;
		}
		if(j==n2)
	       {	printf("%d",arr1[i]);
			flag=1;
	       }
	}
	if(flag==0)
	printf("NO");
	getch();
  }
