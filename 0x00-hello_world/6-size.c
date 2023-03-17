#include <stdio.h>
/**
 *main starts the program
 *return mus give 0
 */
int main(void)
{
	printf("Size of a char: %ld bytes", sizeof(char));
	printf("size of an int: %ld bytes", sizeof(int));
	printf("size of a long int: %ld bytes", sizeof(long int));
	printf("size of a long long int: %ld bytes", sizeof(long long int));
	printf("size of a float; %ld bytes", sizeof(float));
	return (0);
}
