#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 5;
    char op = '+';
    int result;

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Erreur : division par zéro\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Erreur : modulo par zéro\n");
            }
            break;
        case '&':
            result = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, result);
            break;
        case '|':
            result = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, result);
            break;
        case '~':
            // Opérateur bit à bit NON uniquement sur num1
            result = ~num1;
            printf("~%d = %d\n", num1, result);
            break;
        default:
            printf("Opérateur inconnu\n");
    }

    return 0;
}

