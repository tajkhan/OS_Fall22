#include <stdio.h>

int main (){
    /******************************
     * structure declaration
     * ***************************/
    // int x, y;
    struct { int x; int y;} point1, point2;

    printf("\nEnter coordinates of a point: ");
    scanf("%d %d", &point1.x, &point1.y);

    printf("\npoint1 = (%d, %d)", point1.x, point1.y);


    // can be initialized during declaration
    struct { int x; int y;} point3 = {22, 33};
    struct { int x; int y;} point4 = {.y=2, .x=34};  // designated initializer
    printf("\npoint4 = (%d, %d)", point4.x, point4.y);

    /******************************
     * structure tag declaration
     * ***************************/
    struct cplx {int real; int imag;};
    
    struct cplx c1 = {33, 55}, c2 = {4, 6};
    printf("\n c1 = %d + %di", c1.real, c1.imag);


    /******************************
     * structure typedef declaration
     * ***************************/
    typedef struct { char name[10]; float gpa; int year;} student;
    student s1 = {"somename", 2.3, 3};
    printf("\ns1 name = %s, gpa = %f, year = %d", s1.name, s1.gpa, s1.year);

 
    return 0;
}
