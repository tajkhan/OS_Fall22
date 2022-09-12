#include <stdio.h>
#include <string.h>

int main () {
    // str1 is an array created on stack
	char str1[] = "my first string"; // null char ('\0') at the end
	printf("str1 = %s, len = %lu\n", str1, strlen(str1));

    // str2 is an pointer created on stack containing
    // the address of the string litteral created in 
    // the read only static data segment
	char* str2 = "my second string"; // null char ('\0') at the end
	printf("str2 = %s, len = %lu\n", str2, strlen(str2));

    /*
	str1[4] = 'z';
	printf("str1 = %s, len = %lu\n", str1, strlen(str1));
	str2[4] = 'z';
	printf("str2 = %s, len = %lu\n", str2, strlen(str2));
    */


    /*
    // Compier is your friend, take its help!
	const char* str3 = "my second string";
	printf("str3 = %s, len = %lu\n", str3, strlen(str3));
	str3[4] = 'z';
	printf("str3 = %s, len = %lu\n", str3, strlen(str3));
    */

	return 0;
}
