#include<stdio.h>

void main()
{
  float a,b,c,i1,i2,i3;
 
  scanf("%f %f %f",&a,&b,&c);
   a!=0;
  b!=0;
  c!=0;
  i1=(b+c);
  i2=(b+a);
  i3=(a+c);
  if(a>=b)
  {
  	if(a>=c)
    {
      if(a<i1)
      {
        printf("1");
      }
      else
      {
        printf("0");
      }
    }
    else
    {
      if(c<i2)
      {
        printf("1");
      }
      else
      {
        printf("0");
      }
    }
  }
  else if(b>=a)
  {
    if(b>=c)
    {
      if(b<i3)
      {
        printf("1");
      }
      else
      {
        printf("0");
      }
    }
    else 
    {
      if(c<i2)
      {
        printf("1");
      }
      else
      {
        printf("0");
      }
    }
    
  }
}
  