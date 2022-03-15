#include <stdio.h>
 /**
 *write - function to print string
 * @filedes - file descriptor
 * @buf - pointer to array of character
 * @nbyte - number of bytes to print
 * Return: 0 sucess
 */
int write(int filedes, const char *buf, unsigned int nbyte);
/**
* main - entry point
*
* Return: 0 success
*/
int main(void)
{
write(1, "_putchar\n", 9);
return (0);
}
