#include <stdio.h>
  int main() {
    int n, rev = 0, temp,sum;
    printf("enter a number: ");
    scanf("%d", &n);
    temp = n;
 while (temp) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
              }
          sum=n+rev;
printf ("the sum of the palindrome is %d",sum);
return 0;
}
