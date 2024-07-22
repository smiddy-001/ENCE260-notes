/* a test c file */

#include <stdio.h> // the standard input and printf
#include <stdint.h> // the standard integer datatypes

int main(void) // the void represents the function has no return
{

	// first the declerations
	int32_t num1;
	int32_t num2;
	int32_t total;

	// now the code
	num1 = 10;
	num2 = 20;
	
	total = num1 + num2;

	printf("The sum of %d and %d is %d\n", num1, num2, total);
	
	return 0;
}
