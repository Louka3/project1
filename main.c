#include <stdio.h>
#include <limits.h>

// Write a program to determine the ranges of char, 
// short, int, and long variables, both signed and unsigned, 
// by printing appropriate values from standard headers and 
// by direct computation. Submit your code and a screenshot of the output. 

int main(){
    printf("Using limits.h:\n\nSCHAR_MIN: %d\n", SCHAR_MIN);
    printf("SCHAR_MAX: %d\n", SCHAR_MAX);
    printf("UCHAR_MAX: %d\n", UCHAR_MAX);
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("-------------\n");
    printf("SHRT_MIN: %d\n", SHRT_MIN);
    printf("SHRT_MAX: %d\n", SHRT_MAX);
    printf("USHRT_MAX: %d\n", USHRT_MAX);
    printf("-------------\n");
    printf("INT_MIN: %i\n", INT_MIN);
    printf("INT_MAX: %i\n", INT_MAX);
    printf("UNIT_MAX: %u\n", UINT_MAX);
    printf("-------------\n");
    printf("LONG_MIN: %ld\n", LONG_MIN);
    printf("LONG_MAX: %ld\n", LONG_MAX);
    printf("ULONG_MAX: %lu\n", ULONG_MAX);
    printf("-------------\n\n");
    printf("Using direct computation:\n\n");

    
    return 0;
}