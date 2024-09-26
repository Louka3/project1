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

    // printf("Signed int: %.0f to %.0f\n", -pow(2, 32 - 1), pow(2, 32 - 1) - 1);
    printf("Minimum value for a signed int: %.0f\n", -pow(2, 32 - 1));
    printf("Maximum value for a signed int: %.0f\n", pow(2, 32 - 1) - 1);
    printf("Minimum value for a unsigned int: %u\n", 0);
    printf("Maximum value for a unsigned int: %.0f\n", pow(2, (sizeof(unsigned int) * 8)) - 1);
    printf("-------------\n");

    printf("Minimum value for a signed long int: %ld\n", LONG_MIN);
    printf("Maximum value for a signed long int: %ld\n", LONG_MAX);
    printf("Minimum value for a unsigned long int: %d\n", 0);
    printf("Maximum value for a unsigned long int: %lu\n\n\n", ULONG_MAX);
    
    return 0;
}

// #include <stdio.h>
// #include <limits.h>

// int main() {
//     // Using limits.h to find the ranges
//     printf("Using limits.h:\n");
//     printf("Signed char: %d to %d\n", CHAR_MIN, CHAR_MAX);
//     printf("Unsigned char: 0 to %u\n", UCHAR_MAX);
//     printf("Signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
//     printf("Unsigned short: 0 to %u\n", USHRT_MAX);
//     printf("Signed int: %d to %d\n", INT_MIN, INT_MAX);
//     printf("Unsigned int: 0 to %u\n", UINT_MAX);
//     printf("Signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
//     printf("Unsigned long: 0 to %lu\n", ULONG_MAX);

//     // Direct computation for signed types
//     printf("\nBy direct computation:\n");
//     printf("Signed char: %d to %d\n", -(1 << (sizeof(char) * 8 - 1)), (1 << (sizeof(char) * 8 - 1)) - 1);
//     printf("Unsigned char: 0 to %u\n", (1U << (sizeof(char) * 8)) - 1);
//     printf("Signed short: %d to %d\n", -(1 << (sizeof(short) * 8 - 1)), (1 << (sizeof(short) * 8 - 1)) - 1);
//     printf("Unsigned short: 0 to %u\n", (1U << (sizeof(short) * 8)) - 1);
//     printf("Signed int: %d to %d\n", -(1 << (sizeof(int) * 8 - 1)), (1 << (sizeof(int) * 8 - 1)) - 1);
//     printf("Unsigned int: 0 to %u\n", (1U << (sizeof(int) * 8)) - 1);
//     printf("Signed long: %ld to %ld\n", -(1L << (sizeof(long) * 8 - 1)), (1L << (sizeof(long) * 8 - 1)) - 1);
//     printf("Unsigned long: 0 to %lu\n", (1UL << (sizeof(long) * 8)) - 1);

//     return 0;
// }


//?  0 - 0
/*
    1000


*/