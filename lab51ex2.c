#include <stdlib.h>
#include <stdio.h>
int sum(int n) {
return n == 0? n : n % 10 + sum(n / 10);
}
int count(int n, int k) {
int m = 0;
int x;
for (x = 1; x < n; ++x) if (sum(x) == k) ++m;
return m;
}
int main(void) {
int n = 1000000;
int k = 19;
int x = count(n, k);
printf("%i\n", x);
system("pause > nul");
return 0;
}
