/* K & R Exercise: 1-19
 * Author: Cipher7d3 */

#include <stdio.h>

#define MAXLINE 1000 // maximum input line length
#define LIMIT 80

int getsentence(char line[], int maxline); // cannot use getline, it's a library function
void reverse(char line[], char reversed[], int length);

int main() {
    int len; // current line length
    char line[MAXLINE];
    char rline[MAXLINE];

    while ((len = getsentence(line, MAXLINE)) > 0) {
        reverse(line, rline, len);
        printf("%s|%s\n\n", line, rline);
    } 
    
    return 0;
}

// Read a line into s
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

void reverse(char line[], char rline[], int len) {
    int i, j;
    i = len - 1;
    j = 0;

    while (--i >= 0) {
        rline[j] = line[i];
        j++;
    }
}
