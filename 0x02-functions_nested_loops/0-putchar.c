#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
write(1, "_putchar\n", 9);
return (0);
}
