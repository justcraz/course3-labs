#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char alphabet[] = "aAbBcCdDeEfFGghHiIjJkKlLMmNnOoPpQqRrSsTtUuVvWwXxYyZz"; /* 26*2 = 52 */
const char golosny[] = "aAEeIiOoUuYy"; /* 6*2 = 12 */

int is_letter(const char c)
{
for(int x = 0; x < 52; x++)
if(c == alphabet[x]) return 1;
return 0;
}

int is_golosna(const char c)
{
for(int x = 0; x < 12; x++)
if(c == golosny[x]) return 1;
return 0;
}

int main()
{
const int size = 1024;
char * str;
str = (char *) malloc(size);

gets(str); /* введення рядка з клавіатури */
int len = strlen(str); /* довжина рядка */
int count_golos = 0; /* для підрахунку слів, що закінчуються на голосні */
int word_len = 0; /* для підрахунку довжини слова */
/* потрібно прокрутити рядок */
for(int x = 0; x < len; x++)
{
if( is_letter(str[x]) )
{
word_len++;
if( ! is_letter(str[x + 1]) )
{ /* якщо наступний символ - не буква */
if( is_golosna(str[x]) )
{ /* якщо останній символ слова - голосна */
count_golos++;
}
if(word_len < 5) /* якщо довжина слова менше п'яти символів */
{
for(int y = x - word_len + 1; y <= x; y++) /* друкуємо слово */
putchar(str[y]);
putchar('\n');
}
}
}
else
{
word_len = 0;
}
}

printf("Кількість слів у рядку, що закінчуються на голосну -- %d.\n", count_golos);

free(str);
str = NULL;

return 0;
}
