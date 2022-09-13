/************************
 * You can use the "-E" option of gcc to get preprocessor output
 * For example for this file you can run: gcc -E 7preprocessor.c
 * For other compilers, you can google the appropriate options.
 * *********************/

/************************
 * Include directive
 * *********************/
#include <stdio.h>


/*****************
* remove the line below, or change it to #define DEBUG 0
* in order to excclude the conditionally compiled code.
*****************/
#define DEBUG 1

int div (int a, int b){

#if DEBUG
    printf("\n value of a is %d\n", a);
    printf("\n value of b is %d\n", b);
#endif

    return a/b;
}

int main (){

    int x, y;
    printf("Enter the dividend and the divisor: ");
    scanf("%d %d", &x, &y);

    int quotient = div(x,y);
    printf("\nThe result is %d\n", quotient);


    return 0;
}
