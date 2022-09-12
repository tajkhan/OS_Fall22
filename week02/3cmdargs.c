#include <stdio.h>

int main (int argc, char * argv[]) {
// int main (int argc, char ** argv) {


    /***********************************
     * Command line arguments
     * argc is the number of args (including program name)
     * argv contains pointers to strings of arguments
     * argv[0] is the program name
     * argv[argc] is NULL
     * ********************************/
    printf("The program recieved %d arguments:\n", argc);
    for (int i=0; i<argc; i++)
        printf("argv[%d]=%s\n", i, argv[i]);

    return 0;
}
