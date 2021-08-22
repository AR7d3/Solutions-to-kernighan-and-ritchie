 /* Author: AR7d3 */

#include <stdio.h>

char lower(char c) {
    return (c >= 'A' && c <= 'Z') ? c - 'A' + 'a' : c;
}

int main() {
    char c = 'B';
    printf("%c\n", lower(c));
    return 0;
}

