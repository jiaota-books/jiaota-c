#include <stdio.h>

int main() {
    int a = 258;
    printf("a(%%d) = %d\n", a);
    printf("a(%%u) = %u\n", a);
    printf("a(%%o) = 0%o\n", a);
    printf("a(%%x) = 0x%x\n", a);
    printf("a(%%i) = %i\n", a);
    printf("a(%%hi) = %hi\n", a);
    printf("a(%%hu) = %hu\n", a);
    return 0;
}
