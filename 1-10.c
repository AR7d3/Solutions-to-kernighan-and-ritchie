/* K & R Exercise: 1-10
 * Author: Cipher7d3 */

#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        }
        if (c == '\b') {
            printf("\\b");
        }
        if (c == '\\') {
            printf("\\\\");
        }
        else{
            putchar(c);
        }
    }
    return 0;
}
