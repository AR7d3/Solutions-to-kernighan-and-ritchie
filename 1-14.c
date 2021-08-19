/* K & R Exercise: 1-14
 * Author: Cipher7d3 */

#include <stdio.h>

int main() {
    int c, freq[128], i, j;
    for (i = 0; i < 128; ++i) {
        freq[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c != '\n' && c != ' ' && c != '\t'){
            for (i = 0; i < 128; ++i) {
                if (c == i) {
                    freq[i]++;
                    break;
                }
            }
        }
    }

    for (i = 0; i < 128; ++i) {
        if (freq[i] > 0) {
            printf("%c: ", i);
            for (j = 0; j < freq[i]; j++) {
                printf("#");
            }
            printf("\n");
        }
    }
    return 0;
}
