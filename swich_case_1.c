# include <stdio.h>

int main()
{
   char a;

   printf("your choice a,b,c: ");  //prompt to enter a or b or c
   scanf("%c", &a);

   switch(a)
   {
      case 'a':
      case 'A':
         puts("you typed a. ");
         puts("do execution for typed a again. fall through execution until seeing the break; ");
         break;
      case 'b':
      case 'B':
         puts("you typed b. ");
         puts("do execution for typed b again. fall through execution until seeing the break; ");
         break;
      case 'c':
      case 'C':
         puts("you typed c. ");
         puts("do execution for typed c again. fall through execution until seeing the break; ");
         break;
      default:
         puts("you didn't type any a, b or c. out of order.");
         puts("execute default's next line, until seeing the ending curly bracket '}'.");
   }

   return 0;

}
