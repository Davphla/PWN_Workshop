#include <stdio.h>
#include <stdlib.h>

/**
 * ~~~~~~~~~~~~~~~~
 * My little secret
 * Difficult : 2/4
 * ~~~~~~~~~~~~~~~~
 * No one will ever access this place...
 * I hope at least...
 * ~~~~~~~~~~~~~~~~
 * Useful resources :
 *
 */
void super_secret_function(void)
{
    puts("\nSuper Secret Function\n");
    system("/bin/sh");
}

int main() {
    char s[6];

    scanf("%s", &s);
    puts("How surprising...");
    return 0;
}
