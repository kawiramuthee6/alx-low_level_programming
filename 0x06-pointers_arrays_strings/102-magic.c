#include <stdio.h>

/**
* main - Entry point for demonstrating modification of an array element.
*
* Description:
* This program modifies the value of an element in an array by using a pointer.
* It assigns 98 to a[2] by manipulating the pointer p.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

/* Modify a[2] indirectly using the pointer p */
*(p + 5) = 98;
/* Print the modified value of a[2] */
printf("a[2] = %d\n", a[2]);

return (0);
}
