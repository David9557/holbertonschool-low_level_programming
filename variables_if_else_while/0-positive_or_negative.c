#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}

{
	scan("%d" , &n);

	if (n < 0) {
		printf("number is negative\n");
	}
	else if (n > 0) {
		printf("number is positive \n");
	}
	else if (n = 0) {
		printf("number is zero \n");
	}
	return 0;
}
