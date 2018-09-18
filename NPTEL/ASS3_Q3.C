/* to count the number of words in the sentence.*/
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
  char str[100];
    int i, words;
  bool previous_space' = false;

    /* Input string from user */
    printf("Enter any string: ");
    scanf("%s",str);
  

    i = 1;
    words = 0;

    /* Runs a loop till end of string */
    while(str[i] !='\0')
    
  {
        /* If the current character(str[i]) is white space */
     if(previous_space == false)
        if(str[i]==' ')
        {
            words++;
          previous_space = true;
        }
      else
      {
        previous_space = false;
      }
    }
        i++;
    }
  
  

    printf("%d", words);

    return 0;
}
