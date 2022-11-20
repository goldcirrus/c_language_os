#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct person {
		char *name;    //member is a pointer
		int age;
	} you;
	char buffer[32];

	printf("Enter your name: ");
	fgets(buffer,32,stdin);
	/* allocate storage: pointer must be initialized before use, or allocated with a memory space. */
	you.name = (char *)malloc( strlen(buffer) + 1 );     //storage is the buffer's size + one for null character
	if( you.name == NULL)
	{
		puts("Unable to allocate storage");
		exit(1);
	}

	/* copy the buffer's string content into the name char array pointer.  */
	strcpy(you.name,buffer);   //name is a pointer, still used a dot to be referenced
	/* get your age */
	printf("Enter your age: ");
	scanf("%d",&you.age);

	printf("You are %s",you.name);
	printf("You are %d years old\n",you.age);

	return(0);
}

