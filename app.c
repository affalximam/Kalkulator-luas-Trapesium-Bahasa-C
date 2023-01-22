#include <stdio.h>
#include <stdlib.h>

void clear(){
    // linux
    // system("clear");
    
    // windows
    system("cls");
}

int main(){
    float a, b, tinggi, ab, hasil;
    char ulang;
    top:
    clear();
    printf("\n-----------------------------------\n");
    printf("Kalkulator menghitung luas Trapesium\n");
    printf("By : AFFALXIMAM\n");
    printf("-----------------------------------\n\n");

    printf("Masukan nilai a (cm) : ");
    scanf(" %f", &a);
    printf("Masukan nilai b (cm) : ");
    scanf(" %f", &b);
    printf("Masukan tinggi (cm) : ");
    scanf(" %f", &tinggi);

    ab = a + b;
    hasil = ab * tinggi / 2;
    printf("Luas Trapesium adalah (cm) : %.2f \n\n", hasil);

    cek:
    printf("Apakah ingin mengulang ? (y/t) : ");
    scanf(" %c", &ulang);
    if(ulang == 'y'){
        clear();
        goto top;
    }
    if(ulang == 't'){
        printf("\nProgram Selesai");
    }
    else{
        goto cek;
    }
    return 0;
}