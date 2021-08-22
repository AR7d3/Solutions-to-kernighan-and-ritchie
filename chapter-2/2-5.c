 /* Author: Cipher7d3 */

#include <stdio.h>

#define MAXWIDTH 100

void inputline(char s[]) {
    int i,c;
    for (i = 0; (c = getchar()) != '\n'; ++i) {
        s[i] = c;
    }
    s[i] = '\0';
}

int any(char s1[], char s2[]) {
    int i,c,j;

    for (i = 0; s1[i] != '\0'; ++i) {
        c = s1[i];
        for (j = 0; s2[j] != '\0'; ++j) {
            if (s2[j] == c) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    char s1[MAXWIDTH], s2[MAXWIDTH];

    printf("s1: ");
    inputline(s1);
    printf("s2: ");
    inputline(s2);

    printf("%d\n", any(s1, s2));
    return 0;
}

