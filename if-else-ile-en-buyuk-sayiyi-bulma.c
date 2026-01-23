#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi1,sayi2,sayi3;
    printf("Ilk sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d",&sayi2);
    printf("3.sayiyi Giriniz:");
    scanf("%d",&sayi3);
    if(sayi1>sayi2 && sayi1>sayi2)
    {
        printf("En Buyuk Sayi: %d",sayi1);
    }
    else if(sayi2>sayi1 && sayi2>sayi3)
    {
        printf("En Buyuk Sayi: %d",sayi2);
    }
    else
    {
        printf("En Buyuk Sayi: %d",sayi3);
    }


    return 0;
}
