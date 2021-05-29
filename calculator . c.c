#include <stdio.h>
int main() {
    char operator;
    int first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%d %d", &first, &second);

    switch (operator) {
    case '+':
        printf("%d + %d = %d", first, second, first + second);
        break;
    case '-':
        printf("%d - %d = %d", first, second, first - second);
        break;
    case '*':
        printf("%d * %d = %d", first, second, first * second);
        break;
    case '/':
        printf("%d / %d = %d", first, second, first / second);
        break;
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
