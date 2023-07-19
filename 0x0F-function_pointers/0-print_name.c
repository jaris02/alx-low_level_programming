#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *)) {
    f(name);
}

void print(char *name) {
    printf("%s\n", name);
}

int main() {
    char name[] = "John Doe";
    print_name(name, print);
    return 0;
}

