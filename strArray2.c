#include <stdio.h>
#include <ctype.h>

char *encrypt(char *input);  //prototype

int main()
{
    char *instructions = "Deliver this package to Berlin.";

    printf("the message is %s", encrypt(instructions));

    return 0;
}

char *encrypt(char *input)
{
    static char output[65];   //delcare local char array(string), use static to retain the data when function is returned.
    int x=0;

    while(*input)
    {
        if(isalpha(*input))
            output[x]=*input+1;
        else
            output[x]=*input;
        input++;
        x++;
    }

    return output;  //string variable(char array) is a pointer variable.
}
