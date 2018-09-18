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
     
        if(i!=0&&str[i]==' '&&flag==0)
        {
            words++;
            flag=1;
        }
      else
      {
        flag=0;
      }
    
        i++;
  }
  
  

    printf("%d", words);

    return 0;
}
