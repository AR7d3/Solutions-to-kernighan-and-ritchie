/* K & R Exercise: 1-4.
 * Authour: Cipher7d3 */

#include <stdio.h>

int main(){

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("%3s\t%6s\n", "C", "F");
    while (celsius <= upper){
    fahr = (9.0/5.0) * celsius + 32;
    printf("%3i\t%6i\n", celsius, fahr);
    celsius = celsius + step;
    }

    return 0;
}
