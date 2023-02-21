#include <config.h>
#include <stdio.h>

#include "hello.h"

void print_hello(void)
{
    printf("Hello, World! from " PACKAGE_STRING ".\n");
}
