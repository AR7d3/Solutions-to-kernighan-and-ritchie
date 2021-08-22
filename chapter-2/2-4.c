 /* Author: Cipher7d3 */

#include <stdio.h>

#define MAXWIDTH 100

void squeeze(char s1[], char s2[]) {
    int i,j,k,c;
    k = 0;
    while (s2[k] != '\0') {
        c = s2[k];
        for (i = j = 0; s1[i] != '\0'; i++) {
            if (s1[i] != c) {
                s1[j++] = s1[i];
            }
        }
        s1[j] = '\0';
        k++;
    }
}

void inputline(char s[]) {
    int c;
    int i = 0;
    while ((c = getchar()) != '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
}

int main() {
    char s1[MAXWIDTH], s2[MAXWIDTH];

    printf("s1: ");
    inputline(s1);
    printf("s2: ");
    inputline(s2);

    squeeze(s1, s2);
    printf("%s\n", s1);

    return 0;
}

