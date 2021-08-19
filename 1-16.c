/* K & R Exercise: 1-16
 * Author: Cipher7d3 */

#include <stdio.h>

int getsentence(); // cannot use getline, it's a library function

int main() {
    int len; // current line length
    int max; // current length seen so far

    max = 0;
    while ((len = getsentence()) > 0) {
        if (len > max) {
            max = len;
        }
    }
    if (max > 0) {
        printf("%d", max - 1);
    }
    return 0;
}

// Read a line into s and return length
int getsentence() {
    int c, i;

    for (i = 0; (c=getchar()) != EOF && c != '\n'; ++i) {
        ;
    }
    if (c == '\n') {
        ++i;
    }

    return i;

}

