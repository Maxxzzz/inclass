#include <stdio.h>
#include <stdlib.h>

int fact_c(int n);
int fact_s(int n);

int main(int argc, char **argv) {
    int n = atoi(argv[1]);

    int fc = fact_c(n);
    printf("C: %d\n", fc);

    int fs = fact_s(n);
    printf("Asm: %d\n", fs);

    return 0;
}
