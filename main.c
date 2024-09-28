#include <stdio.h>
#include <limits.h>
#include <math.h> // need the math library in order to use the pow() function

// Write a program to determine the ranges of char, 
// short, int, and long variables, both signed and unsigned, 
// by printing appropriate values from standard headers and 
// by direct computation. Submit your code and a screenshot of the output. 

int main(){
    // using the Standard Headers to visualize the ranges.
    printf("Using limits.h standard library header file:\n\n");
    printf("------------- Char\n");
    printf("- Minimum value for a Signed Char: %d\n", SCHAR_MIN);
    printf("- Maximum value for a Signed Char: %d\n", SCHAR_MAX);
    printf("- Minimum value for a Unsigned Char: %d\n", 0);
    printf("- Maximum value for a Unsigned Char: %d\n", UCHAR_MAX);
    printf("------------- Short Int\n");
    printf("- Minimum value for a Short Int: %d\n", SHRT_MIN);
    printf("- Maximum value for a Short Int: %d\n", SHRT_MAX);
    printf("- Minimum value for a Unsigned Short Int: %d\n", 0);
    printf("- Maximum value for a Unsigned Short Int: %d\n", USHRT_MAX);
    printf("------------- Int\n");
    printf("- Minimum value for a Signed Int: %i\n", INT_MIN);
    printf("- Maximum value for a Signed Int: %i\n", INT_MAX);
    printf("- Minimum value for a Unsigned Int: %u\n", 0);
    printf("- Maximum value for a Unsigned Int: %u\n", UINT_MAX);
    printf("------------- Long Int\n");
    printf("- Minimum value for a Signed Long Int: %ld\n", LONG_MIN);
    printf("- Maximum value for a Signed Long Int: %ld\n", LONG_MAX);
    printf("- Minimum value for a Unsigned Long Int: %d\n", 0);
    printf("- Maximum value for a Unsigned Long Int: %lu\n", ULONG_MAX);
    printf("-------------\n\n");
    // direct computation. I used the pow function from the math.h library and the sizeof function to compute the values for each data type
    printf("Using direct computation:\n\n");
    printf("------------- Char\n");
    printf("- Minimum value for a Signed Char: %d\n", -(int)pow(2, sizeof(char) * (8 - 1)));
    printf("- Maximum value for a Signed Char: %d\n", (int)pow(2, sizeof(char) * (8 - 1)) - 1);
    printf("- Minimum value for a Unsigned Char: %d\n", 0);
    printf("- Maximum value for a Unsigned Char: %d\n", (int)pow(2, sizeof(char) * 8) - 1);
    printf("------------- Short Int\n");
    printf("- Minimum value for a Short Int: %d\n", -(int)pow(2, (sizeof(short) * 8) - 1));
    printf("- Maximum value for a Short Int: %d\n", (int)pow(2, (sizeof(short) * 8) - 1) - 1);
    printf("- Minimum value for a Unsigned Short Int: %d\n", 0);
    printf("- Maximum value for a Unsigned Short Int: %d\n", (int)pow(2, (sizeof(short) * 8)) - 1);
    printf("------------- Int\n");
    printf("- Minimum value for a Signed Int: %.0f\n", -pow(2, (sizeof(int) * 8) - 1));
    printf("- Maximum value for a Signed Int: %.0f\n", pow(2, (sizeof(int) * 8) - 1) - 1);
    printf("- Minimum value for a Unsigned Int: %u\n", 0);
    printf("- Maximum value for a Unsigned Int: %.0f\n", pow(2, (sizeof(unsigned int) * 8)) - 1);
    printf("------------- Long Int\n");
    printf("- Minimum value for a Signed Long Int: %ld\n", (long)-pow(2, (sizeof(signed long) * 8) - 1));
    printf("- Maximum value for a Signed Long Int: %ld\n", (long)(pow(2, (sizeof(signed long) * 8) - 1) - 1.0));
    printf("- Minimum value for a Unsigned Long Int: %d\n", 0);
    printf("- Maximum value for a Unsigned Long Int: %lu\n\n\n", (unsigned long)(pow(2, (sizeof(long) * 8)) - 1));
    return 0;
}

