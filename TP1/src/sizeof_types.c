#include <stdio.h>

int main() {
    // i. char
    printf("sizeof(char): %zu octets\n", sizeof(char));
    printf("sizeof(signed char): %zu octets\n", sizeof(signed char));
    printf("sizeof(unsigned char): %zu octets\n", sizeof(unsigned char));

    // ii. short
    printf("sizeof(short): %zu octets\n", sizeof(short));
    printf("sizeof(unsigned short): %zu octets\n", sizeof(unsigned short));

    // iii. int
    printf("sizeof(int): %zu octets\n", sizeof(int));
    printf("sizeof(unsigned int): %zu octets\n", sizeof(unsigned int));

    // iv. long int
    printf("sizeof(long int): %zu octets\n", sizeof(long int));
    printf("sizeof(unsigned long int): %zu octets\n", sizeof(unsigned long int));

    // v. long long int
    printf("sizeof(long long int): %zu octets\n", sizeof(long long int));
    printf("sizeof(unsigned long long int): %zu octets\n", sizeof(unsigned long long int));

    // vi. float
    printf("sizeof(float): %zu octets\n", sizeof(float));

    // vii. double
    printf("sizeof(double): %zu octets\n", sizeof(double));

    // viii. long double
    printf("sizeof(long double): %zu octets\n", sizeof(long double));

    return 0;
}
