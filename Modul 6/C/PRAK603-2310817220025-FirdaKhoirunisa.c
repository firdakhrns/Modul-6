#include <stdio.h>

int main (){
    int angka1, angka2, i;
    scanf("%d %d", &angka1, &angka2);
    int matriks1[angka1], matriks2[angka2];

    if (angka1 != angka2) {
        printf ("Jumlah tidak sama") ;
    }
    else {
        for (i = 0; i < angka1; i++) {
            scanf ("%d", &matriks1[i]);
        }
        for (i = 0; i < angka2; i++) {
            scanf ("%d", &matriks2[i]) ;
        }
        for (i = 0; i < angka1; i++) {
            printf ("%d ", matriks1[i] * matriks2[i]) ;
        }
    }
    return 0;
}