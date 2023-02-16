#include <stdio.h>
/**
 * main-Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(){
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
	/**
	 * Computing the value /size of the variable using 'sizeof' operator
	 */
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
