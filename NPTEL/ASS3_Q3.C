/* to count the number of words in the sentence.*/
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
  char str[100];
    int i, words;

    /* Input string from user */
    printf("Enter any string: ");
    scanf("%s",str);
  

    i = 1;
    words = 0;

    /* Runs a loop till end of string */
    while(str[i] !='\0')
    
  {
        /* If the current character(str[i]) is white space */
        if(str[i]==' ' || str[i]=='\t'||str[i]=='.'||str[i]==','||str[i]==';')
        {
            words++;
        }

        i++;
    }
  
  

    printf("%d", words);

    return 0;
}