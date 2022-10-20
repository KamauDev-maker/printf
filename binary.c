#include "main.h"
/**
*to_Binary -  convert usigned int to binary
*@n: number passed for convertion
*Return: number of base 2 characters
*/
int to_Binary(unsigned int n)
{
int binary[sizeof(unsigned int) * 8],
modula, x, char_len = 0;
if (n == 0)
{
char_len += _putchar('0');
return (char_len);
}
if (n == 1)
{
char_len += _putchar('1');
return (char_len);
}
modula = 0;
while (n > 0)
{
binary[modula] = '0' + (n % 2);
n /= 2;
modula++;
}
for (x = modula - 1; x >= 0; x--)
char_len += _putchar(binary[x]);
return (char_len);
}
/**
*to_Octal - changes a number to base 8
*@n:  number to change
*Return: number of base 8 chars
*/
int to_Octal(unsigned int n)
{
int char_len = 0, modula,
octal[sizeof(unsigned int) * 8], x, y = 0;
while (n != 0)
{
modula = n % 8;
octal[y++] = '0' + modula;
n /= 8;
}
for (x = y - 1; x >= 0; x--)
char_len += _putchar(octal[x]);
return (char_len);
}
/**
*to_Hexa - changes a number to base 16
*@n: the number to change
*Return: number of base 16 chars
*/
int to_Hexa(unsigned int n)
{
int char_len = 0, modula, hexa[sizeof(unsigned int) * 16], y = 0, i;
while (n != 0)
{
modula = n % 16;
if (modula < 10)
hexa[y++] = 48 + modula;
else
hexa[y++] = 55 + modula;
n /= 16;
}
for (i = y - 1; i >= 0; i--)
char_len += _putchar(hexa[i]);
return (char_len);
}
