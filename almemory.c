#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *scores, x;  //declare a int type pointer:scores, but it must be allocated memory space to work.
    int array[4];  //assign/allocate memory space to array, must allocate memory to pointer scores
    scores=array;   //pointer:scores is equal to array, so it has memory space now, without the above memory space, it won't work!

    *(scores+0) = 8;
    *(scores+1)=9;
    *(scores+2)=7;
    *(scores+3)=6;

    for(x=0;x<4;x++)
    {
        printf("the score %d is %d. \n",(x+1),*(scores+x));
    }

    /******* allocate memory space to a int pointer by malloc function  ***************/
    int *scor, y;   //declare an int type pointer, but it must be allocated memory space to work.

    scor=malloc(sizeof(int)*4);
    if(scor==NULL)     //MUST do safety check to test the returned memory address is not the NULL pointer
    {
        puts("error occured when allocating memory space to scor.");
        return 1;   //quit main function
    }

    *scor=1;    //or *(scor+0)=1;  assign int value to the memory address
    *(scor+1)=2;
    *(scor+2)=3;
    *(scor+3)=4;

    for(y=0;y<4;y++)
    {
        printf("the scor %d is %d. \n",(y+1),*(scor+y));
    }


    return 0;
}
