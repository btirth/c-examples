/*A graph is abstractly a collection of vertices which are labelled by
non-negative integers, and a collection of edges. A graph called an
undirected graph if we talk of merely the presence of an edge between
vertices i and j, rather than its direction. 

For example, the following is a graph:


In this problem, you are given the edges in an undirected graph. An
edge is a pair of non-negative integers (i, j) which indicates that
the vetex i is connected to vetex j by an edge.

Afterwards, you will be given a vertex number n. You have to output
the list of vertices which are connected n by an edge, in the order in
which the edges were input.

Input

You are given the following.

1. The first line contains an integer, E, between 1 and 1000

2. This is followed by E lines, where each containing a pair of
numbers i and j where i and j are both non-negative integers <=
34,000. No edge will be listed more than once.

3. The last line contains a non-negative integer n <= 34,000. n is
assured to be a vertex listed in one of the E lines in part (2).

Output

You have to output the list of nodes to which n has an edge, in the
order in which the edges were input, one line for each vertex.



  	         Input	    Output
Test Case 1	
		4
		1 2	    3
		2 3	    5
		3 4
		4 5
		4

Test Case 2	
		10
		1 2 
		1 3	    2
		1 4	    3
		2 3	    4
		2 4	    5	
		5 1	    6
		5 2
		5 3
		5 4
		6 1
		1

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int  i,n,arr[1000][2],a,j;
	//to scan number of pair
	scanf("%d",&a);
	//to scan pairs
	for(i=0;i<a;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	// n is assured to be a vertex listed in one of the E lines in part (2) 
	scanf("%d",&n);
	/*to find the list of nodes to which n has an edge, in the
          order in which the edges were input, one line for each vertex*/
	for(i=0;i<a;i++)
	{
		for(j=0;j<2;j++)
		{
			if(a==arr[i][0])
			{
				printf("%d\n",arr[i][1]);
				break;
			}
			if(a==arr[i][1])
			{
				printf("%d",arr[i][0]);
				break;
			}
		}
	}
	getch();
}