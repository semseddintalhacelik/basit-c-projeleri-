#include <stdio.h>
#include <stdlib.h>
int main(){

    const float pi=3.1415;
    float r,alan,cevre;
    printf("******Dairenin Alaninin ve Cevresini Hesaplayan Program******\n");
    printf("Yaricapi Giriniz: ");
    scanf("%f",&r);
    alan=pi*r*r;
    cevre=2*pi*r;
    printf("Dairenin Alani: %f \nDairenin Cevresi: %f",alan,cevre);







    return 0;
}
