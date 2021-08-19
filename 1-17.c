/* K & R Exercise: 1-17
 * Author: Cipher7d3 */

#include <stdio.h>

#define MAXLINE 1000 // maximum input line length
#define LIMIT 80

int getsentence(char line[], int maxline); // cannot use getline, it's a library function

int main() {
    int len; // current line length
    char line[MAXLINE];

    while ((len = getsentence(line, MAXLINE)) > 0) {
        if (len - 1 > LIMIT) {
            printf("%s\n", line);
        }
    }
    return 0;
}

// Read a line into s and return length
int getsentence(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        ++i;
    }
    s[i] = '\0';
    return i;

}
