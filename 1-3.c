/* K & R Exercise: 1-3.
 * Authour: Cipher7d3 */

#include <stdio.h>

int main() {

    float fahr, celsius; // float allows floating-point numbers (such as 1.2, 3.141, 2.718 etc.)
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("%5s\t%6s\n", "F", "C"); // %ns means minimum width of string is 'n' (where n is a number), \t is tab
    while (fahr <= upper){ // typical while loop
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%5.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
    }

    return 0;
}
