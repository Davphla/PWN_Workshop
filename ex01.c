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
 * https://0xrick.github.io/binary-exploitation/bof1/
 */
int main() {
    char cmd[64] = "ls";
    char s[64];

    puts("Hello ! Welcome to my world!");
    puts("Input your name, and I'll print you my favorite command !!");
    scanf("%s", &s);
    printf("Your name is : \"%s\" and it's %lu size long\n", s, strlen(s));
    if (strcmp(cmd, "ls -l") != 0) {
        puts("You've changed my command !! How dare you !");
    }
    system(cmd);
    return 0;
}
