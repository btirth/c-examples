/*a program that reads an M x N matrix A and prints its elements in
spiral order*/
#include <stdio.h>
#include<conio.h>
void main()
{
    int i, k = 0, l = 0,m,n,a[20][20];
    clrscr();
    printf("Enter the number of row:");
    scanf("%d",&m);
    printf("Enter the number of column:");
    scanf("%d",&n);

    /*  k - starting row index
	m - ending row index
	l - starting column index
	n - ending column index
	i - iterator
    */
    for(k=0;k<m;k++)
    {
	for(l=0;l<n;l++)
	{
		scanf("%d",&a[k][l]);
	}
    }
    printf("\n\nspiral order is:\n")
    k=0;
    l=0;
    while (k < m && l < n)
    {
	/* Print the first row from the remaining rows */
	for (i = l; i < n; ++i)
	{
	    printf("%3d ", a[k][i]);
	}
	k++;

	/* Print the last column from the remaining columns */
	for (i = k; i < m; ++i)
	{
	    printf("%3d ", a[i][n-1]);
	}
	n--;

	/* Print the last row from the remaining rows */
	if ( k < m)
	{
	    for (i = n-1; i >= l; --i)
	    {
		printf("%3d ", a[m-1][i]);
	    }
	    m--;
	}

	/* Print the first column from the remaining columns */
	if (l < n)
	{
	    for (i = m-1; i >= k; --i)
	    {
		printf("%3d ", a[i][l]);
	    }
	    l++;
	}
    }
    printf("\n-Tirth Bharatiya");
    getch();
}