#include <stdio.h>
#include <string.h>



int main()
{
    char *first="123456789abcde";
    char second[]="/an apple today.";
    char copyedstr[50];


    printf("before copy, the length of copyedstr is %d. \n", strlen(copyedstr));
    strcpy(copyedstr,first);
    printf("after coping first, the copyedstr is: %s \n", copyedstr);

    printf("after coping first, the length of copyedstr is %d. \n", strlen(copyedstr));
    strcat(copyedstr,second);
    printf("after concatnate second to copyedstr, the lenght of copyedstr is %d. \n", strlen(copyedstr));
    printf("after concatnate, the copyedstr is %s \n", copyedstr);

    /*the following won't work for declaration and assignment as:  char *first="abcd";
      but they work if first is declared and initialized as:  char first[]="abcd";

    strcat(first,second);
    puts(first);
   */

    return 0;
}
