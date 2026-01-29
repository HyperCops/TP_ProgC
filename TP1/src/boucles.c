#include <stdio.h>

int main() {
    int compteur = 5;

    // Version boucle FOR
    printf("--- Version FOR ---\n");
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    // Version boucle WHILE (Suggestion demandée)
    printf("\n--- Version WHILE ---\n");
    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
