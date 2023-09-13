#include <stdio.h>
#include <stdlib.h>

int main()
{
    int produits_vendus;
    int prix_vente;

    printf("entrez valeur des produits_vendus:\n");
    scanf("%d", &produits_vendus);
    printf("entrez valeur de prix_vente:\n");
    scanf("%d", &prix_vente);

    int x = produits_vendus * prix_vente;
    printf("%d",x);

    return 0;
}
