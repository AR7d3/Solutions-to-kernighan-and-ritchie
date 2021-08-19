/* K & R Exercise: 1-8
 * Author: Cipher7d3 */

#include <stdio.h>

int main() {
    long blank, tab, newline;
    int c;
    blank = tab = newline = 0; // can be thought as (blan = (tab = (newline = 0)))

    while ((c = getchar()) != EOF) { // getchar gets every input character, EOF in macos is ctrl+D
    if (c == '\n') ++newline;
    else if (c == ' ') ++blank;
    else if (c == '\t') ++tab;
    }

    printf("Number of Blanks: %ld\n", blank);
    printf("Number of Tabs: %ld\n", tab);
    printf("Number of Newlins: %ld\n", newline);

    return 0;
}
