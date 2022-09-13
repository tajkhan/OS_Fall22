/************************
 * Include directive
 * *********************/
#include <stdio.h>

/************************
 * Simple macros
 * *********************/
// syntax: #define identifier replacement-list
#define N 10
#define PI 3.14
#define ERRMSG "Error: An error occured!"

/************************
 * Parametrized macros
 * *********************/
// syntax: #define identifier(x1, x2, ... , xn)  replacement-list
#define MAX(x,y) ((x)>(y)?(x):(y))
#define IS_EVEN(i) ((i)%2==0)

int main (){
    int arr[N];
    // ... use the array

    float area = PI*3*3;

    printf(ERRMSG);


    int m = MAX(arr[0], arr[1]);

    if (IS_EVEN(m)){
        printf("Oh, it's even!\n");
    }

    return 0;
}
