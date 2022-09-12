#include <stdio.h>
#include <string.h>

int main () {
    // str1 created on stack
	char str1[] = "hello ";
    // str2 created on stack
    // this copying a string using = only works in declarations !!
	char str2[7] = "world!"; // don't forget to reserve space for '\0'

    /***********************************
     * Length of strings
     * ********************************/
    // strlen() does not count the null char ('\0') !!!
	printf("str1 = %s, len = %lu\n", str1, strlen(str1));
	printf("str2 = %s, len = %lu\n", str2, strlen(str2));

    /***********************************
     * Copying strings
     * ********************************/
    // allocating space for destination is programmer responsability!!
    char newcopy[20];
    // after declaration, copying a string in array must use strcpy()!
    strcpy(newcopy, str1); // copies the string, including '\0'
	printf("newcopy = %s, len = %lu\n", newcopy, strlen(newcopy));

    /***********************************
     * Concatenate two strings
     * ********************************/
    // programer's responsability to make sure dest str has enough space!!
    strcat(newcopy, str2);
	printf("newcopy after cat= %s, len = %lu\n", newcopy, strlen(newcopy));

    /***********************************
     * Compare two strings  strcmp(s1, s2)
     * returns -ve if s1<s2, 0 if s1==s2, +ve if s1>s2 // not -1, +1!!
     * ********************************/
    // compares two strings in lexicographic (dictionary) order
    if (strcmp(str1, str2) < 0)
        printf("string %s is less than %s\n", str1, str2);
    else if (strcmp(str1, str2) > 0)
        printf("string %s is greater than %s\n", str1, str2);
    else // strcmp(str1, str2) == 0
        printf("string %s is equal to %s\n", str1, str2);


	return 0;
}
