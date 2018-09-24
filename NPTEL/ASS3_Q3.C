/* to count the number of words in the sentence.*/
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
  char str[100];
    int i, words,flag=0;
  

    /* Input string from user */
    printf("Enter any string: ");
    scanf("%s",str);
  

    i = 0;
    words = 0;

    /* Runs a loop till end of string */
    while(str[i] !='\0')
    
  {
        /* If the current character(str[i]) is white space */
     printf("Current character=%c\n",str[i]);
      printf("i is %d\n",i);
        if(i!=0&&str[i]==' '&&flag==0)
        {
          printf("inside if\n");  
          words++;
            flag=1;
        }
      else
      {
        printf("inside else\n")
        flag=0;
      }
    
        i++;
  }
  
  

    printf("%d\n", words);

    return 0;
}
