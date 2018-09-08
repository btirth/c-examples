/*You are given a sequence of integers as input, terminated by a
-1. (That is, the input integers may be positive, negative or 0. A -1
in the input signals the end of the input.) 

-1 is not considered as part of the input.  

Find the second largest number in the input. You may not use arrays.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a,n=0,t=0,s=0,p=0,n1=0,n2=0,n3=0;
  clrscr();
  scanf("%d",&a);
  while(a!=-1)
  {
    if(a>n)
    {
      n=a;
      if(n>t)
      {
	n1=t;
	t=n;
	n=n1;
	if(t>s)
	{
	  n2=s;
	  s=t;
	  t=n2;
	  if(s>p)
	  {
	    n3=p;
	    p=s;
	    s=n3;
	  }
	}
      }
    }
    scanf("%d",&a);
  }
  printf("%d",t);
  getch();
}