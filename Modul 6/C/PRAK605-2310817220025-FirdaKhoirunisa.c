#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matriksA[n][n];
    printf("Matriks A\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriksA[i][j]);
        }
    }
    int matriksB[n][n];
    printf("Matriks B\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriksB[i][j]);
        }
    }
    int hasil[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < n; k++) {
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }
    printf("Matriks AXB\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    return 0;
}
