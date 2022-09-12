#include <stdio.h>
#include <string.h>

int main () {

    /***********************************
     * Arrays of strings
     * ********************************/
   
    /***********************************
     * 2D array of characters
     * ********************************/
    char strings1[3][10] = {"abc", "defghi", "j"};

    for (int i=0; i<3; i++)
        printf("%d: %s\n", i, strings1[i]);


    /***********************************
     * Array of char pointers
     * ********************************/
    char *strings2[3] = {"klm", "nopqur", "s"};

    for (int i=0; i<3; i++)
        printf("%d: %s\n", i, strings2[i]);

	return 0;
}
