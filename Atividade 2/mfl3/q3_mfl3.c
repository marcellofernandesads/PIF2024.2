#include <stdio.h>

int main() {
    int N;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        int M[N][N];

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                M[i][j] = (i > j) ? i - j + 1 : j - i + 1;
            }
        }

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                printf("%3d", M[i][j]);
                if (j < N - 1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}