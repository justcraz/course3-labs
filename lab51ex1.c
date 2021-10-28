#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <math.h>
int main(void) {
int x, n, m, d, k;
do scanf("%i", &x); while (x < 1 || x > SHRT_MAX);
n = (int)pow(10, (int)log10(x));
m = x / n;
printf("%i", m);
while (x) {
d = x - m * n;
n /= 10;
m *= 10;
if (!n) break;
k = d / n;
m += k;
printf("%3i", k);
}
puts("");
system("pause > nul");
return 0;
}
