# include <stdio.h>

int main()
{
   int a,b,newline1;
   printf("type two letters: \n");

   a=getchar();
   b=getchar();

   printf("you typed ");
   putchar(a);
   printf(" and ");
   putchar(b);
   //user type 2 letters and enter key press(newline char)
   newline1=getchar();   //if after first two letters input, the enter key is pressed, then the new line char is absorbed by this statement


   int i;
   char c;
   int newline2;  //user type two letters and enter key(newline char)
   printf("\ntype two letter: \n");
   i=getchar();  //i is input as integer type
   c=(char)getchar();  //c is input converted to char type
   newline2=getchar(); //user type 2 letters and enter key press(newline character)

   printf("the character can be read as integer type is %c. \n", i );
   printf("the character concatnated to char from int is %c", c);
   putchar(newline2);

   return 0;


}
