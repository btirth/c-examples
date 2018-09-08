/*Input
First, you will be given N, which is the size of the matrix.

Then you will be given N rows of integers, where each row consists of
N integers separated by spaces. 

Output
If the input matrix is triangular, then print yes. Otherwise, print
no. */
#include<stdio.h>
void main()
{
  int i,j,n,sum1=0,sum2=0,a;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a);
      if(i<j)
      {
        sum1=sum1+a;
      }
      if(i>j)
      {
        sum2=sum2+a;
      }
      
    }
  }
  if(sum1==0)
  {
    printf("yes");
  }
  else if(sum2==0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}