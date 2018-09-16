/* to find the kth occurrence of an even integer in a sequence of non-negative integers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int k,ip,count=0,a=-1;        //ip is a input number
				      //a is a kth occurrence of n in the sequence
	clrscr();
	scanf("%d",&k);
	scanf("%d",&ip);
	while(ip!=-1)
	{
		if(ip%2==0)
		{
			count++;
			if(count==k)
			{
				a=ip;        //to assign output value to a
			}
		}
		//keep scaning
		scanf("%d",&ip);

	}
	//print kth occurence of even
	printf("%d",a);
	getch();
}