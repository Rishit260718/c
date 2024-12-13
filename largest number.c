#include <stdio.h>
int main() {
    int number1, number2, number3;
    printf("Enter number1: ");
    scanf("%d", &number1);
    printf("Enter number2: ");
    scanf("%d", &number2);
    printf("Enter number3: ");
    scanf("%d", &number3);

    if (number1 >= number2 && number1 >= number3) {
        printf("Number1 is the largest\n");
    }
    if (number2 >= number1 && number2 >= number3) {
        printf("Number2 is the largest\n");
    }
    if (number3 >= number1 && number3 >= number2) {
        printf("Number3 is the largest\n");
    }
    return 0;
}
