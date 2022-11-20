#include <stdio.h>

int main()
{
	const char filename[] = "sonnet18.txt";
	FILE *fh;

	/* open the file */
	//"r": to write, if file not exist create it, if exist, old content is discarded
	fh = fopen(filename,"r");
	if( fh == NULL )
	{
		printf("Unable to read from file %s\n",filename);
		return(1);
	}

	printf("File '%s' opened\n",filename);

	/* close when you're done */
	fclose(fh);

	return(0);
}
