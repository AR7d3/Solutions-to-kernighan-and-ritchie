#include <stdio.h>
#include <limits.h>

int main() {
    printf("char ranges from to %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char ranges from to %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char ranges from to %d to %d\n", 0, UCHAR_MAX);
    printf("int ranges from to %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int ranges from to %d to %u\n", 0, UINT_MAX);
    printf("short ranges from to %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short ranges from to %d to %d\n", 0, USHRT_MAX);
    printf("long ranges from to %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long ranges from to %d to %lu\n", 0, ULONG_MAX);
    return 0;
}
