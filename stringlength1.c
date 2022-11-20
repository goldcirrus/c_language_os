#include<stdio.h>
#include<string.h>

int main()
{
    char string[]="123456789";

    int len=strlen(string);
    printf("the string's length is %d. \n", len);

    puts("******another way to declare a string and use strlen() function. Please enter a sentence:  ");

    char str[9];
    int len2;

    fgets(str,9,stdin);
    len2=strlen(str);  //when count the sentence entered from the keyboard, the last keyed enter(new line character) is counted. but null on the end is not counted.
    printf("the text length from the standard input is %d. ", len2);
    printf("the input text is: %s", str);   //only 7 displayable characters, + last new line character + ending null character = total 9 characters
    return 0;
}
