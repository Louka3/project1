#include <stdio.h>
#include <limits.h>
#include <math.h> // need the math library in order to use the pow() function

// Write a program to determine the ranges of char, 
// short, int, and long variables, both signed and unsigned, 
// by printing appropriate values from standard headers and 
// by direct computation. Submit your code and a screenshot of the output. 

int main(){
    printf("Using limits.h:\n\n");
    printf("Minimum value for a signed char: %d\n", SCHAR_MIN);
    printf("Maximum value for a signed char: %d\n", SCHAR_MAX);
    printf("Minimum value for a unsigned char: %d\n", 0);
    printf("Maximum value for a unsigned char: %d\n", UCHAR_MAX);
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("-------------\n");
    printf("Minimum value for a short int: %d\n", SHRT_MIN);
    printf("Maximum value for a short int: %d\n", SHRT_MAX);
    printf("Minimum value for a unsigned short int: %d\n", 0);
    printf("Maximum value for a unsigned short int: %d\n", USHRT_MAX);
    printf("-------------\n");
    printf("Minimum value for a signed int: %i\n", INT_MIN);
    printf("Maximum value for a signed int: %i\n", INT_MAX);
    printf("Minimum value for a unsigned int: %u\n", 0);
    printf("Maximum value for a unsigned int: %u\n", UINT_MAX);
    printf("-------------\n");
    printf("Minimum value for a signed long int: %ld\n", LONG_MIN);
    printf("Maximum value for a signed long int: %ld\n", LONG_MAX);
    printf("Minimum value for a unsigned long int: %d\n", 0);
    printf("Maximum value for a unsigned long int: %lu\n", ULONG_MAX);
    printf("-------------\n\n");

    printf("Using direct computation:\n\n");
    printf("Minimum value for a signed char: %d\n", -(int)pow(2, sizeof(char) * (8 - 1)));
    printf("Maximum value for a signed char: %d\n", (int)pow(2, sizeof(char) * (8 - 1)) - 1);
    printf("Minimum value for a unsigned char: %d\n", 0);
    printf("Maximum value for a unsigned char: %d\n", (int)pow(2, sizeof(char) * 8) - 1);
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("-------------\n");

    printf("Minimum value for a short int: %d\n", -(int)pow(2, (sizeof(short) * 8) - 1));
    printf("Maximum value for a short int: %d\n", (int)pow(2, (sizeof(short) * 8) - 1) - 1);
    printf("Minimum value for a unsigned short int: %d\n", 0);
    printf("Maximum value for a unsigned short int: %d\n", (unsigned int)pow(2, (sizeof(short) * 8)) - 1);
    printf("-------------\n");


    printf("Minimum value for a signed int: %.0f\n", -pow(2, (sizeof(int) * 8) - 1));
    printf("Maximum value for a signed int: %.0f\n", pow(2, (sizeof(int) * 8) - 1) - 1);
    printf("Minimum value for a unsigned int: %u\n", 0);
    printf("Maximum value for a unsigned int: %.0f\n", pow(2, (sizeof(unsigned int) * 8)) - 1);
    printf("-------------\n");

    printf("Minimum value for a signed long int: %.0f\n", -pow(2, (sizeof(signed long) * 8) - 1));
    printf("Maximum value for a signed long int: %ld\n", (long)(pow(2, (sizeof(signed long) * 8) - 1) - 1.0));
    printf("Minimum value for a unsigned long int: %d\n", 0);
    printf("Maximum value for a unsigned long int: %lu\n\n\n", (unsigned long)(pow(2, (sizeof(long) * 8)) - 1));
    return 0;
}

