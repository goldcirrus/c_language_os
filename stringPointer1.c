#include <stdio.h>
#include <ctype.h>

void changeCase(char *input);

int main()
{
    char string[]={'a','e','\0'};  //null is '\0', display as nothing
    char string2[]={'h','e','k','\0'};
    char *ptr;

    ptr=&string[2];
    printf("The value of *ptr is %c over. \n", *ptr);
    puts(string2);

    char str[68];
    puts("enter a sentence: ");
    fgets(str,68,stdin);
    changeCase(str);
    puts(str);

    return 0;
}

void changeCase(char *input)
{
    while(*input)
     {
         *input=toupper(*input);
         input++;     //or *input++;

     }

}

