#include <stdio.h>

void afficherBinaire(int nombre) {
    printf("Nombre %d en binaire : ", nombre);
    
    // On suppose un int de 32 bits, on boucle de 31 à 0
    // On utilise un "flag" pour ne pas afficher les zéros non significatifs au début (optionnel mais plus propre)
    int firstOneEncountered = 0; 

    for (int i = 31; i >= 0; i--) {
        // On décale le nombre de 'i' bits vers la droite et on regarde si le dernier bit est 1
        int bit = (nombre >> i) & 1;

        if (bit == 1) {
            firstOneEncountered = 1;
        }

        if (firstOneEncountered || i == 0) {
            printf("%d", bit);
        }
    }
    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for(int i = 0; i < taille; i++) {
        afficherBinaire(nombres[i]);
    }

    return 0;
}
