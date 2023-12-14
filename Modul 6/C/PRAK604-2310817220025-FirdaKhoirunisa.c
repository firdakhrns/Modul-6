#include <stdio.h>
#include <string.h>

int main(){
    char kode1[50], kode2[50];
    int dimiliki, diterima, i, bintang = 0, pagar = 0;
    scanf("%[^\n]%c", &kode1);
    scanf("%[^\n]%c", &kode2);
    dimiliki = strlen (kode1);
    diterima = strlen (kode2);
    
    if (dimiliki != diterima){
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    else{
        for (i = 0; i < dimiliki; i++){
            if (kode1[i] == kode2[i]){
                if (kode1[i] == ' '){
                    printf(" ");
                }
                else{
                    printf("*"); bintang++;
                }
            }
            else{
                printf("#"); pagar++;
            }
        }
        printf("\n* = %d", bintang);
        printf("\n# = %d", pagar);
        if (bintang >= pagar){
            printf("\nPesan Asli\n");
        }
        else {
            printf("\nPesan Palsu\n");
        }
    }
}