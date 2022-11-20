#include <stdio.h>

void f(void)
{
	static int x = 0;   //after first call initialize x to zero, the 2nd time function is called, this line is skipped. So x won't be re-initialized again.
	//x=0;     reset x to zero again.

	printf("Value of x is %d\n",x);
	x++;
	printf("Value of x is %d\n",x);
}

int main()
{
	f();
	f();

	return(0);
}

