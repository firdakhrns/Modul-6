#include <stdio.h>

int main(){
    int ruang, i;
    scanf("%d", &ruang);
    int zetsu_putih[ruang];

    for (i= 0; i < ruang; i++){
        scanf("%d", &zetsu_putih[i]);
    }
    for (i = 0; i < ruang; i++){
        printf("%d ", zetsu_putih[i] * (i + 1));
    } 
    return 0;
}