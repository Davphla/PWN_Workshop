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
 * https://dhavalkapil.com/blogs/Buffer-Overflow-Exploit/
 */
void super_secret_function(void)
{
    // DON'T EVER START THIS FUNCTION, I WARN YOU
    puts("\n~~== Super Secret Function ==~~\n");
    puts("\nGreat job ! You can cat the file now !\n");
    system("/bin/sh");
}

int main() {
    char s[6];

    scanf("%s", &s);
    puts("How surprising...");
    puts("You don't know my real secret eh eh...");
    return 0;
}
