/* K & R Exercise: 1-12
 * Author: Cipher7d3 */

#include <stdio.h>

#define IN 1
#define OUT 0

int main () {
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            putchar('\n');
        }
        else {
            putchar(c);
        }
    }
    return 0;
}
