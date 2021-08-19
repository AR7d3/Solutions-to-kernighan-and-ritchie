/* K & R Exercise: 1-18
 * Author: Cipher7d3 */

#include <stdio.h>

#define MAXLINE 1000 // maximum input line length

int getsentence(char line[], int maxline); // cannot use getline, it's a library function
int removespace(char from[], char to[], int length);

int main() {
    int len, newlen; // current line length
    char line[MAXLINE];
    char newline[MAXLINE];

    while ((len = getsentence(line, MAXLINE)) > 0) {
        newlen = removespace(line, newline, len);
        printf("%s\n", newline);
        printf("Previous length: %d\n", len - 1);
        printf("New length: %d\n\n", newlen);
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

// Remove trailing spaces, tabs and copies from 'char from[]' to 'char to[]' and return new length
int removespace(char from[], char to[], int len) {
    int i, newlen;

    i = len - 2;
    while (from[i] == ' ' || from[i] == '\t') {
        --i;
    }
    newlen = i+1;

    to[i+1] = '\0';
    while (i >= 0) {
        to[i] = from[i];
        i--;
    }
    return newlen;
}


