# include <stdio.h>

int main()
{
    char ch='A';

    do
    {
       putchar(ch);
       ch++;
    }
    while(ch!='Z');

    puts("\nanother example for loop below: ");

    char alpha;
    int numeric;
    for(alpha='A'; alpha<'K'; alpha++)
    {
        for(numeric=0; numeric<10; numeric++)
            {
                printf("%c-%d\t", alpha,numeric);
            }
        putchar('\n');
    }


    return 0;
}


