#include <stdio.h>


int main() {
	int x, *px;
	
	x = 10;
	px = &x;
	
	printf("%i\n", x);
	printf("%i\n", px);
	printf("%i\n", *px);
	
	return 0;
}
