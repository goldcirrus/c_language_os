#include <stdio.h>

int main()
{
	char *string = "Greetings from the digital realm!\n";
	char *s=string;

	while(*s)  //use * as a value
	{
		//putchar(*s++);  //use * as a value
		putchar(*s);
		s++;      //pointer string used as a memory location
	}
	puts("\n\n");

	int x, *ptr;
	ptr=&x;
	*ptr=89;

	printf("pointer's value:%d \n", *ptr);
	printf("return pointer's value: '%d' and increment pointer 1 more position where is a garbage position: \n", *ptr++);
    //printf("display this garbage position's value: %d", *ptr);
	//printf("return pointer's value plus 1: '%d' and increment pointer 1 more position where is a garbage position: \n", ++*ptr);




	return(0);
}

