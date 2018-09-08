/*You are given a sequence of integers as input, terminated by a
-1. (That is, the input integers may be positive, negative or 0. A -1
in the input signals the end of the input.) 

-1 is not considered as part of the input.  

Find the second largest number in the input. You may not use arrays.
*/
#include<stdio.h>

void main()
{
  //ip is to scan  a sequence of integers as input
  //largest number is stored in variable 'largest'
  //2nd largest number is stored in variable 'largest_2'
  int ip,largest_2=-2147483648,largest=-2147483648,temp=0;
  scanf("%d",&ip);
  while(ip!=-1)
  {
    if(ip>largest_2)
    {
      largest_2=ip;
      if(largest_2>largest)
      {
        //swap 'largest' and 'largest_2'
        temp=largest;
        largest=largest_2;
        largest_2=temp;
      }
    }
  //keep scaning
  scanf("%d",&ip);
  }
  printf("%d",largest_2);//final output
  
}  