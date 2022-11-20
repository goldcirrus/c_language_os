#include <stdio.h>

int main()
{
	char a;
	double b;
	float c;
	int d;

	int *ptr;  //won't get a memory address because this pointer is not assigned, such as ptr=&d; (d is int type)

	printf("Address of char variable 'a':\t%p\n",&a);
	printf("Address of double variable 'b':\t%p\n",&b);
	printf("Address of float variable 'c':\t%p\n",&c);
	printf("Address of int variable 'd':\t%p\n",&d);
    printf("Address of int pointer variable 'ptr':\t%p\n",ptr);  //won't show a memory address since ptr is not assigned.

	return(0);
}

