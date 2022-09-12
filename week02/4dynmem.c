#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]) {


    int count = 0;
    int * numbers = NULL;

    printf("How many numbers would you like to enter: ");
    scanf("%d", &count);

    /***********************************
     * Dynamic memory allocation
     * malloc() to allocate memory.
     * ********************************/
    // int *p = new int[10];
    numbers = malloc (count*sizeof(int)); // number of bytes
    if (numbers==NULL){
        printf("Error: Memory allocation failed\n");
        return -1;
    }

    for (int i=0; i<count; i++){
        printf("\nEnter number %d: ", i);
        scanf("%d", &numbers[i]);
    }

    int sum = 0;
    for (int i=0; i<count; i++){
        sum += numbers[i];
    }

    printf("\nThe sum of numbers you entered is =  %d: ", sum);
    printf("\nThe average of numbers you entered is =  %d: ", sum/count);

    float avg = (float)sum/(float)count;
    printf("\nAverage =  %f: ", avg);

    /***********************************
     * free() to de-allocate memory.
     * ********************************/
    free (numbers); // Don't forget to free once your done!!

    return 0;
}
