/*Find the number of distinct numbers in a given sequence.*/
/*Input:
The input consists of two lines.
The first line consists of a positive number N. N is at most 1000.
The second line consists of N numbers separated by spaces.

Output:
The output should be the number of distinct elements in the sequence.

Sample Input:
4 
1 2 3 1 */



/*#include<stdio.h>
void main()
{
  int n,arr1[1001],arr2[1001],count=0,i=0,j=0;
  clrscr();
  scanf("%d",&n);
  for(i=0;i<n;i++)
	{
    scanf("%d",&arr1[i]);
  }
  for(i=0,j=0;i<n&&j<n;i++,j++)
   { arr2[j]=arr1[i];
  //  printf("%d\n",arr2[j]);
    }
  //  for(i=0;i<n;i++)
  //  printf("\n\n%d",arr1[i]);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr1[i]==arr2[j])
	count++;
 //     printf("----%d=%d\n",arr1[i],arr2[j]);
    }

//    printf("%d,%d\n",i,count);
  }
.	printf("%'d",n-(count/4));
getch();
} */
#include<stdio.h>
#include<conio.h>
int i,count;
int check(int a[i],int i,int count)       //to check entered number is distinct or not
{
	int j;
	for(j=0;j<i;j++)
	{
		if(a[i]!=a[i-j])
		{count++;}
	}
	return count;
}
void main()
{
	int i,n,a[100],count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		check(a[i],i,count); //to check entered number is distinct or not
	}
	printf("%d",count);
	getch();

}

