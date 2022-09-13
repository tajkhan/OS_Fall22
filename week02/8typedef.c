#include <stdio.h>

#define TRUE 1
#define FALSE 0

/*******************
 * Defining new types
 * *****************/
typedef int Bool;

int main (){
    Bool result = FALSE;
    int x, y;

    printf("Enter two numebrs:\n");
    scanf ("%d %d", &x, &y);

    result = x<y;

    if (result==TRUE)
        printf("first number is smaller than the second\n");
    else
        printf("first number is NOT smaller than the second\n");

    return 0;

}
