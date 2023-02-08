#include <stdio.h>
#include <stdlib.h>

int add3_c(int, int, int);
int add3_s(int, int, int);

int main(int argc, char **argv) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    int c_sum = add3_c(a, b, c);
    printf("C: %d\n", c_sum);

    int s_sum = add3_s(a, b, c);
    printf("Asm: %d\n", s_sum);

    return 0;
}
