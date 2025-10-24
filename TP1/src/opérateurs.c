#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("Addition : %d + %d = %d\n", a, b, a + b);
    printf("Soustraction : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division : %d / %d = %d\n", a, b, a / b);
    printf("Modulo : %d %% %d = %d\n", a, b, a % b);

    // Opérateurs de comparaison
    printf("a est égal à b : %s\n", (a == b) ? "true" : "false");
    printf("a est supérieur à b : %s\n", (a > b) ? "true" : "false");

    return 0;
}
