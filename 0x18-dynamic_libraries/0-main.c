#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
printf("%d\n", _strlen("My Dyn Lib"));
return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x18. Dynamic libraries$ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
julien@ubuntu:~/0x18. Dynamic libraries$ ldd len
linux-vdso.so.1 =>  (0x00007fff5d1d2000)
libdynamic.so => not found
libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f74c6bb9000)
/lib64/ld-linux-x86-64.so.2 (0x0000556be5b82000)
