#include <stdio.h>

int main() {
    char c = 'A';
    short s = -10;
    int i = 100;
    long l = 100000L;
    long long ll = 123456789012LL;
    
    unsigned int ui = 500U;
    
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 123.456789123456L;

    printf("char : %c\n", c);
    printf("short : %hd\n", s);
    printf("int : %d\n", i);
    printf("long : %ld\n", l);
    printf("long long : %lld\n", ll);
    printf("unsigned int : %u\n", ui);
    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
