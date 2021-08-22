#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define MAXWIDTH 10

long int htoi(char s[]) {
    int len = strlen(s); // length of the string

    // lowercasing all the characters in the string
    for (int i = 0; i < len; ++i) { 
        s[i] = tolower(s[i]);
    }

    // handling '0x'
    int limit;
    if (s[1] == 'x'){ 
        limit = 2;
    }
    else limit = 0;

    if (len - limit > MAXWIDTH) {
        return -1;
    }

    // Conversion mechanism
    long int ans = 0; // final answer
    int p = 0; // powers of 16
    int i = len-1; // hexadecimal to decimal conversion is done right to left
    while (i >= limit) {
        if (s[i] >= '0' && s[i] <= '9') { // for converting characters between 0 and 9
            ans += pow(16, p) * (s[i] - '0');
        }
        else if (s[i] >= 'a' && s[i] <= 'f') { // for converting characters between a/A and f/F
            ans += pow(16, p) * (s[i] - 87); // (-87) cause 'a' is 97 in ascii and 'a' represents 10 in decimal
        }
        i--;
        p++;
    }

    return ans;
}

void inputline(char s[]) {
    int c;
    int i = 0;
    while ((c = getchar()) != '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
}

int main() {
    char hex[MAXWIDTH + 2];
    inputline(hex);
    long int converted = htoi(hex);
    
    if (converted == -1) {
        printf("OVERFLOW ERROR: make sure length of the hex string is less than 11\n");
        return 0;
    }
    printf("%ld\n", converted);

    return 0;
}
