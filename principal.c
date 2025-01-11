#include <stdio.h>
#include "interface.h"

int main() {
    int num1, num2;

    printf("Entrez deux nombres : ");
    scanf("%d %d", &num1, &num2);

    printf("Somme : %d\n", somme(num1, num2));
    printf("Produit : %d\n", produit(num1, num2));
    printf("Moyenne : %.2f\n", moyenne(num1, num2));

    return 0;
}

