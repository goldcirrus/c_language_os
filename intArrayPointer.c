# include <stdio.h>

int main()
{
    int array[]={1,2,3,4};
    int *aptr;  //declare a int type pointer
    aptr=array;  //initialize this pointer by array name

    printf("%d", *aptr);  //display array's first element

 // int *aptr2 = {5,6,7,8};         wrong integer type array
 //char *aptr3 = {'I',' ','a','m','\0'};    wrong still integer type array, because char is integer
    char *aptr2 = "ab cd ef";  //ok

    return 0;
}
