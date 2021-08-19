/* K & R Exercise: 1-5
 * Authour: Cipher7d3 */

#include <stdio.h>

int main() {
    printf("%3s\t%6s\n", "F", "C");
    for (int fahr = 300; fahr >= 0; fahr -= 20){
        printf("%3i\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }
    return 0;
}
