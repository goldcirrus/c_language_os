#include <stdio.h>

int main()
{
	int a,*ptra;

	ptra = &a;  //pointer ptra is assigned to a memory address
	printf("Address of a = %p\n",&a);
	printf("Pointer ptra = %p\n",ptra);

	return(0);
}

