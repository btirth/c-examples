/*Find the number of distinct numbers in a given sequence*/
#include<stdio.h>

int unique_elements(int arr[], int n) {

    int counted[n], j, k, count, flag;

    counted[0] = arr[0]; 

    count = 1;/*one element is counted*/

        for(j=0; j <= n-1; ++j) {
        flag = 1;;
        /*the counted array will always have 'count' elements*/
        for(k=0; k < count; ++k) {
            if(arr[j] == counted[k]) {
                flag = 0;
            }
        }
        if(flag == 1) {
            ++count;
            counted[count-1] = arr[j];
        }
    }
    return count;
}
int main(void) {
    int arr[1000],i=0,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
    printf("%d", unique_elements(arr, n));
    return 0;
}
