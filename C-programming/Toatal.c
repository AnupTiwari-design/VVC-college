#include <stdio.h>
int main() {
int m, n, m1, n1, x, y, total_apples, total_oranges;
scanf("%d %d %d %d %d %d", &m, &n, &m1, &n1, &x, &y);
total_apples = m + (m + m1);
total_oranges = n + (n + n1);
printf("%d %d\n", (total_apples - x), (total_oranges - y));
return 0;
}