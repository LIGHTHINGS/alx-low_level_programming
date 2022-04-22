#include <stdio.h>
/**
 * premain - run before main
 */
void __attribute__ ((constructor)) premain()
{
system("echo Hello, Holberton");
}

