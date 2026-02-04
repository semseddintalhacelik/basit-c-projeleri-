#include <stdio.h>
#include <stdlib.h>
int faktoriyel_hesabi(int sayi){

    int faktoriyel=1;
    for(int i=1; i<=sayi; i++)
    {
        faktoriyel=faktoriyel*i;
    }
    printf("%d sayisinin faktoriyeli %d",sayi,faktoriyel);
    return faktoriyel;
}

int main()
{
    faktoriyel_hesabi(5);

}
