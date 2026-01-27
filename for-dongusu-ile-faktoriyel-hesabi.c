#include <stdio.h>

int main() {
    int i, a;
    unsigned long long faktoriyel = 1;

    printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz: ");
    if (scanf("%d", &i) != 1) {
        printf("Gecersiz giris!");
        return 1;
    }

    if (i < 0) {
        printf("Negatif sayilarin faktoriyeli tanimsizdir.\n");
    } else {
        for (a = 1; a <= i; a++) {
            faktoriyel *= a;
        }
        printf("%d sayisinin faktoriyeli: %llu\n", i, faktoriyel);
    }

    return 0;
}
