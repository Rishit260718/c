#include <stdio.h>
int main() {
 int number;
 printf("Enter a number: ");
 scanf("%d", &number);

 switch (number) {
 case 10:
 printf("is equal to 10\n");
 break;
 case 50:
 printf("is equal to 50\n");
 break;
 default:
 printf("is not equal to any\n");
 }
 return 0;
}