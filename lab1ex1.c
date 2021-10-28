#include <stdio.h>

int main()
{
int n,m;
printf("Введіть n: ");
scanf("%d", &n);
printf("Введіть m: ");
scanf("%d", &m);
int A[n][m];
int b[m];
// Ручне заповнення матриці
for(int x = 0; x < n; x++)
{
for(int y = 0; y < m; y++)
{
printf("Введіть значення A[%d][%d]",x,y);
scanf("%d", &A[x][y]);
}
}
// Задамо початкові значення вектора
for(int x = 0; x < m; x++)
{
b[x] = A[0][x];
}
// Пошук мінімальних значень в стовпцях
for(int x = 0; x < m; x++)
{
for(int y = 1; y < n; y++)
{
if(A[y][x] < b[x]) b[x] = A[y][x];
}
}
// Виводимо вектор 
printf("Наш вектор: ");
for(int x = 0; x < m; x++)
{
printf("%d ", b[x]);
}
putchar('\n');

return 0;
}
