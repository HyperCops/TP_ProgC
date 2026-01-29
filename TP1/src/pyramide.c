
#include <stdio.h>

int main() {
    int n = 5; // Hauteur de la pyramide
    int i, j, k;

    printf("Generation de la pyramide pour n = %d :\n", n);

    // Boucle principale pour chaque niveau (ligne)
    for (i = 1; i <= n; i++) {
        
        // 1. Afficher les espaces
        // Pour n=5, ligne 1: 4 espaces, ligne 2: 3 espaces... (n - i)
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2. Afficher les nombres croissants (de 1 jusqu'à i)
        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }

        // 3. Afficher les nombres décroissants (de i-1 jusqu'à 1)
        for (k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }

        // Passage à la ligne suivante
        printf("\n");
    }

    printf("Generation de la pyramide terminee.\n");

    return 0;
}
#
