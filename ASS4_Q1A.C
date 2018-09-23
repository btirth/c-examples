/*Given two arrays of integers output the smallest number in the
first array not present in the second one.*/
/*Input Specification: 
The first line contains the size N1 of the first array.
Next line give the contents of the first array.
Next line contains the size N2 of the second array.
Next line give the contents of the second array.

Output Format:
Output must be a single number which is the smallest number occurring
in the first array that does not occur in the second. In case there is
no such number, output NO.ss*/
#include<stdio.h>

void main()
{
  int arr1[20],i=0,arr2[20],n1,n2,min=arr1[0],flag=0;
  scanf("%d",&n1);
  for(i=0;i<n1;i++)
  {

    scanf("%d",&arr1[i]);
  }
  for(i=0;i<n1;i++)
  {
    if(arr1[i]<=arr1[0])
      min=arr1[i];
  }
  scanf("%d",&n2);
  for(i=0;i<n2;i++)
    scanf("%d",&arr2[i]);
  for(i=0;i<n2;i++)
    if(min==arr2[i])
	{
	flag=1;
	}
  if(flag==0)
  {printf("%d",min);}
  else
  {
    printf("NO");
  }
  
  getch();
	}