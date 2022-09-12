#include <stdio.h>

int main () {

	int x=1;
	int y=2;

	printf("Enter values for two integers:\n");
    // cin >> x >>  y;
	scanf("%d %d", &x, &y); // don't forget the &

	printf("x = %d, y = %d\n", x, y);

	printf("Enter new values for two integers:\n");
    // below will match the "int comma int" pattern for input
	scanf("%d, %d", &x, &y); // note the "," in fmt string
	printf("x = %d, y = %d\n", x, y);

	return 0;
}
