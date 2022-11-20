#include<stdio.h>
#include<fcntl.h>

/*enter a string. it will be written/echo */
/*enter EOF: ctrl+z to stop read and write loop*/

int main(){
    char buf[100];
    int n;
    time_t second;

    while( (n=read(0,buf,100) )>0)
        write(1,buf,n);

    second= time(NULL);    //time(NULL) return integer numbers to represent seconds
    printf("time is %d",second);
    printf("the time is %s", ctime(&second));    //ctime(&time(NULL)) convert integer to string

    return 0;
}
