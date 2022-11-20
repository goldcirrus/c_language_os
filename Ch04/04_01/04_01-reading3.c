#include <stdio.h>

int main()
{
	const char filename[] = "sonnet18.txt";
	FILE *fh;
	char buffer[64];

	/* open the file */
	fh = fopen(filename,"r");
	if( fh == NULL )
	{
		printf("Unable to read from file %s\n",filename);
		return(1);
	}

	/* read the file 64 characters at a time from FILE:fh into buffer */
	//0 is false, any non zero int is true, fgets() return pointer to buffer, or return NULL for error or end of file
	while( fgets(buffer,64,fh) )
		printf("%s",buffer);

	/* close when you're done */
	fclose(fh);

	return(0);
}
