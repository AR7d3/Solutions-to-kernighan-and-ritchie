/* K & R Exercise: 1-9
 * Author: Cipher7d3 */

#include <stdio.h>

#define BLANK 0 // replaces every BLANK with 0, improves readability of code
#define NOBLANK 1

int main() {
    int c, lc;
    lc = NOBLANK;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            lc = NOBLANK;
        }

        if (c == ' ') {
            if (lc != BLANK) {
                putchar(c);
                lc = BLANK;
            }
        }
    }
    return 0;
}
