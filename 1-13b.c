/* K & R Exercise: 1-13b
 * Author: Cipher7d3 */

#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word
#define MAXWORD 25 // Maximum number of words
#define MAXLEN 20 // Maximum length of a word

int main() {
    int c, state, len, i, j, bins[MAXWORD], count;
    state = OUT;
    len = 0;
    count = 0;

    for (i = 0; i < MAXWORD; ++i) {
        bins[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (len > 0) {
                bins[count-1] = len;
            }
            len = 0;
        }
        else if (state == OUT) {
            state = IN;
            ++count;
            ++len;
        }
        else {
            ++len;
        }
    }

    for (i = MAXLEN; i >=1; --i) {
        for (j = 0; j < count; ++j) {
            if (i <= bins[j]) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

