#include <stdio.h>

int main() {
    // i. char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 66;
    printf("char: %c, signed char: %d, unsigned char: %d\n", c, sc, uc);

    // ii. short
    short s = -1000;
    unsigned short us = 1000;
    printf("short: %hd, unsigned short: %hu\n", s, us);

    // iii. int
    int i = -20000;
    unsigned int ui = 20000;
    printf("int: %d, unsigned int: %u\n", i, ui);

    // iv. long int
    long int li = -3000000000L;
    unsigned long int uli = 3000000000UL;
    printf("long int: %ld, unsigned long int: %lu\n", li, uli);

    // v. long long int
    long long int lli = -9000000000000000000LL;
    unsigned long long int ulli = 9000000000000000000ULL;
    printf("long long int: %lld, unsigned long long int: %llu\n", lli, ulli);

    // vi. float
    float f = 3.14159f;
    printf("float: %f\n", f);

    // vii. double
    double d = 3.141592653589793;
    printf("double: %lf\n", d);

    // viii. long double
    long double ld = 3.141592653589793238462643383279L;
    printf("long double: %Lf\n", ld);

    return 0;
}
