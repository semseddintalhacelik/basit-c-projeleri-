#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi_1;
    printf("******************** Tek mi Cift mi ? ***************************\n");
    printf("Sayiyi Giriniz: ");
    scanf("%d",&sayi_1);
    if((sayi_1 % 2) == 0)
    {
        printf("%d sayisi cift bir sayidir",sayi_1);
    }
    else
    {
            printf("%d sayisi tek sayidir",sayi_1);
    }




    return 0;
}
