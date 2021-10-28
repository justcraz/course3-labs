#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() { int a[20][10], j, k, jmin, jmax,
kmin, kmax;
double min, max, b[4][4], c;
srand(time(NULL));
for (j = 0; j < 20; j++) {
for (k = 0; k < 10; k++) { a[j][k] = rand() % 201
- 100;
printf("%5d", a[j][k]);
}
printf("\n");
}
scanf("%lf", &b[0][0]);
max = min = b[0][0];
for (j = 0; j < 4; j++) for (k = 0; k < 4; k++)
{ scanf("%lf", &b[j][k]);
if (b[j][k] < min) {
min = b[j][k]; jmin = j; kmin = k;
}
if (b[j][k] >
max) { max = b[j][k];
jmax = j;
kmax = k;
}
}
c = b[jmin][kmin];
b[jmin][kmin] = b[jmax][kmax];
b[jmax][kmax] = c;
for (j = 0; j < 4; j++) {
for (k = 0; k < 4; k++)
printf("%10.6f", b[j][k]);
printf("\n");
}
}
