#include <stdio.h>

int main(void)
{
int i = 48;
while (i <= 57)
{
putchar(i);
putchar(44);
putchar(32);
++i; }
putchar(10);
return (0);
}
