#include <stdio.h>
int main() {
int cash, sum = 0;
scanf("%d", &cash);
sum = cash / 100;
cash = cash % 100;
sum = sum + (cash / 50);
cash = cash % 50;
sum = sum + (cash / 10);
cash = cash % 10;
sum = sum + (cash / 5);
cash = cash % 5;
sum = sum + (cash / 2);
cash = cash % 2;
sum = sum + (cash / 1);
printf("%d\n", sum);
return 0;
}