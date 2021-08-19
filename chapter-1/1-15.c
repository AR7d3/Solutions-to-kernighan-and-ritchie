/* K & R Exercise: 1-15
 * Author: Cipher7d3 */

#include <stdio.h>

float temp_convert(float fahr) {
    return (5.0/9.0) * (fahr-32);
}

int main() {
    int fahr;
    
    printf("%3c\t%6c\n", 'F', 'C');    
    for (fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%3i\t%6.1f\n", fahr, temp_convert(fahr));
    }

    return 0;
}

