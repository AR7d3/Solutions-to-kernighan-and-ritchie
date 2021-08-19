/* K & R Exercise: 1-13a
 * Author: Cipher7d3 */

#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

int main() {
    int c, state, len, i;
    state = IN;
    len = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (len != 0) {
                for (i = 0; i < len; ++i){
                    printf("#");
                }
                printf("\n");
            }
            len = 0;
        }
        else {
            state = IN;
            ++len;
        }
    }

    return 0;
}
