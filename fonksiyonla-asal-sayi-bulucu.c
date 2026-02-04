#include <stdio.h>
#include <stdlib.h>


int asal_mi(int sayi){
    int i;


    if(sayi < 2) {
        return 0;
    }


    for(i = 2; i <= sayi / 2; i++){
        if(sayi % i == 0){
            return 0;
        }
    }

    return 1;
}

int main()
{
    int sayi;
    int sonuc;

    printf("**********Asal Sayi Bulucu**********\n");
    printf("Sayinizi Giriniz: ");


    scanf("%d", &sayi);


    sonuc = asal_mi(sayi);

    if(sonuc == 1){
        printf("%d sayisi ASALDIR.\n", sayi);
    } else {
        printf("%d sayisi asal DEGILDIR.\n", sayi);
    }

    return 0;
}
