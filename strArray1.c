#include<stdio.h>

int main()
{
    char str[]={'I',' ','a','m','\0'};   //must add null character in the end: \0
    puts(str);

    char *str1="you good!";
    puts(str1);

    char str2[]="apple miss";
    puts(str2);

    int a;
    char b;
    short c;
    long d;
    float e;
    double f;

    printf("an int type variable occupies %lu bytes memory space. \n", sizeof(a));
    printf("an char type variable occupies %lu bytes memory space.\n", sizeof(b));
    printf("an short type variable occupies %lu bytes memory space.\n", sizeof(c));
    printf("an long type variable occupies %lu bytes memory space.\n", sizeof(d));
    printf("an float type variable occupies %lu bytes memory space.\n", sizeof(e));
    printf("an double type variable occupies %lu bytes memory space.\n", sizeof(f));

    printf("variable a's memory address is at %p \n", &a); //hexadecimal or base 16 value

}
