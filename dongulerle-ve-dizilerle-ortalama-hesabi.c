#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("**********Aritmatik Ortalama Hesaplama**********\n");
    float numbers[5];
    float toplam=0;
    for(int i=0; i<5; i++)
    {
        printf("Sirayla Sayilari Giriniz: ");
        scanf("%f",&numbers[i]);
    }
    for(int j=0; j<5; j++)
    {
    toplam=toplam + numbers[j];
    }
    printf("Ortalamaniz: %.3f ",toplam/5);

    return 0;
}
