#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * ~~~~~~~~~~~~~~~~
 * The beginning..
 * Difficult : 1/4
 * ~~~~~~~~~~~~~~~~
 * Hello World !
 * Here's a simple function to print my favorite command !
 * Hope it wont break anything...
 * ~~~~~~~~~~~~~~~~
 * Useful resources :
 *
 */
int main() {
    char s[64];
    char cmd[64] = "ls -l";

    scanf("%s", &s);
    if (strcmp(cmd, "ls -l") != 0) {
        puts("You're getting closer...");
    }
    printf("You wrote : \"%s\"\n", s);
    system(cmd);
    return 0;
}
