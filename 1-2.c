/* K & R Exercise: 1-2.
 * Author: Cipher7d3 */

#include <stdio.h>

int main(){
    printf("Hello\cWorld"); // The compiler gives a warning stating that \c is not an escape sequence
    // The program runs and prints "HellocWorld" omitting '\' from the sequence.
    return 0;
}
