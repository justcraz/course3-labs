#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
const int m = 5, n = 7;
int Matrix[m][n];
srand(time(NULL));
/* генерація та показ початкової матриці */
for(int x = 0; x < m; x++)
{
for(int y = 0; y < n; y++)
{
Matrix[x][y] = rand() % 201 - 100;
printf("%d\t", Matrix[x][y]);
}
putchar('\n');
}
/* шукаємо індекси мінімального та максимальний елементи */
int i_max_x = 0, i_max_y = 0, i_min_x = 0, i_min_y = 0;
for(int x = 0; x < m; x++)
for(int y = 0; y < n; y++)
{
if(Matrix[x][y] > Matrix[i_max_x][i_max_y])
{
i_max_x = x;
i_max_y = y;
}
if(Matrix[x][y] < Matrix[i_min_x][i_min_y])
{
i_min_x = x;
i_min_y = y;
}
}
/* змінюємо значення мінімуму та максимуму */
int tmp = Matrix[i_max_x][i_max_y];
Matrix[i_max_x][i_max_y] = Matrix[i_min_x][i_min_y];
Matrix[i_min_x][i_min_y] = tmp;
/* виводь на друк змінену матрицю */
putchar('\n');
for(int x = 0; x < m; x++)
{
for(int y = 0; y < n; y++)
printf("%d\t", Matrix[x][y]);
putchar('\n');
}
return 0;
}
