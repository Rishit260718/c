#include <stdio.h>

void great_num(int i,int j);

int main() {
     great_num();
    return 0;
}
void great_num() {
    int x, y;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &x, &y);
    x=i;
    y=j;
    
    if (x > y) {
        printf("The first number i is greater.\n", x);
    } else{
        printf("The second number j is greater.\n", y);
    }
}
