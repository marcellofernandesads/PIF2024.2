#include <stdio.h>

int main() {
    int N, a = 0, b = 1, c;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(" %d", b);
        } else {
            c = a + b;
            a = b;
            b = c;
            printf(" %d", c);
        }
    }

    printf("\n");
    return 0;
}