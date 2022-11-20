#include <stdio.h>

int x;  //any variable declared outside of any function is an extern(global) variable. no need to declare it in other fuctions which uses it.

void f(void)
{
	x = -1;    //inside f() function, x is not declared, but initialized, so this x is the extern(global) x.
	printf("In function f() x = %d\n",x);
}

int main()
{
	x = 0;  //inside main function, x is not declared, but initialized, so this x is the extern(global) x.
	printf("In the main() function x = %d\n",x);
	f();
	printf("In the main() function x = %d\n",x);

	return(0);
}

