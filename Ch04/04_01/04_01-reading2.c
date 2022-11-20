#include <stdio.h>

int main()
{
	const char filename[] = "sonnet18.txt";
	FILE *fh;
	char ch;   //int char;  is original code

	/* open the file */
	fh = fopen(filename,"r");
	if( fh == NULL )
	{
		printf("Unable to read from file %s\n",filename);
		return(1);
	}

	/* read the file one character at a time */
	while(1)
	{
		ch = fgetc(fh);     //every loop, read one char from 'fh', send it to std output by putchar(ch)
		if( ch == EOF )      //when reach end of file, break loop stop reading
			break;
		putchar(ch);
	}

	/* close when you're done */
	fclose(fh);

	return(0);
}
