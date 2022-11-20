# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>


char randchar(void)
{
    char r;
    r=rand() % 26;
    r+='A';

    return r;
}

int main()
{
    char x=randchar();   //variable r in fuc
    printf("%c \n",x);

    for(int a=0;a<7;a++)
        putchar(randchar());
    putchar('\n');


    int ch;    //you can use char ch;

    ch='A';
    printf("original is %c \n", ch);
    printf("lower case is %c \n", tolower(ch));
    printf("upper case is %c \n", toupper(ch));
    printf("original is %c \n", ch);

    printf("original is %d \n", ch);
    printf("lower case is %d \n", tolower(ch));
    printf("upper case is %d \n", toupper(ch));
    printf("original is %d \n", ch);

    printf("character 'a' output as integer is %d \n", 'a');
    printf("character 'a' output as character is %c \n", 'a');
    printf("integer  value 65 output as integer is %d \n", 65);
    printf("integer  value 65 output as character is %c \n", 65);
    puts("character variables are really integers only displayed as characters not numbers.");



    return 0;
}
