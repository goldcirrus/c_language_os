#include <stdio.h>
#include <stdlib.h>

#define SIZE 65

int main()
{
    char *str;    //create a char pointer to make a string to store the input from the standard input, no memory space assigned yet.
                   //char str[5]; if not initialized, size must be added:memory space allocated.
    str=malloc(sizeof(char)*SIZE);   //MUST allocate memory space for pointer str which makes a string
    if(str==NULL)     //safty check: make sure the memory space is allocated.
    {
        puts("Unable to allocate memory for str variable.");
        return 1;   //quit the
    }

    puts("enter a sentence: ");   //prompt to ask for user input from standard input device
    fgets(str,SIZE,stdin);       //pointer is the equivalent of the array/string name, *str is only a char value, pointer str is the array of characters
    puts(str);
    printf("you typed %s",str);

/* same as the puts(str)
    while(*str)
    {
        printf("%c",*str);
        str++;
    }
*/

    return 0;
}
