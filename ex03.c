#include <stdio.h>
#include <stdlib.h>

/**
 * ~~~~~~~~~~~~~~~~
 * Wait how..?
 * Difficult : 3/4
 * ~~~~~~~~~~~~~~~~
 * Ah ah !! No more exploit, no more secret !! Everything is working perfectly !
 * You're doomed to eternity muhahahaha...
 * I just don't like PIE, so no more PIE. Hope it won't break anything. My taste after all.
 * ~~~~~~~~~~~~~~~~
 * Useful resources :
 * https://dhavalkapil.com/blogs/Shellcode-Injection/
 */
int main() {
    char s[100] = {0};

    scanf("%s", &s);
    puts(s);
    puts("You don't understand my real nature...");
    puts("Just keep pushing, as they said !");
    return 0;
}
