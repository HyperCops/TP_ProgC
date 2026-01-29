

#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 5;
    char op = '&'; // Changez ceci pour tester +, -, *, /, %, |, ~

    printf("Operation : %d %c %d\n", num1, op, num2);

    switch (op) {
        case '+':
            printf("Resultat : %d\n", num1 + num2);
            break;
        case '-':
            printf("Resultat : %d\n", num1 - num2);
            break;
        case '*':
            printf("Resultat : %d\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0) printf("Resultat : %d\n", num1 / num2);
            else printf("Erreur: Division par zero\n");
            break;
        case '%':
            if(num2 != 0) printf("Resultat : %d\n", num1 % num2);
            else printf("Erreur: Division par zero\n");
            break;
        case '&':
            printf("Resultat (ET binaire) : %d\n", num1 & num2);
            break;
        case '|':
            printf("Resultat (OU binaire) : %d\n", num1 | num2);
            break;
        case '~':
            // Le NON binaire est unaire, il ne s'applique qu'à num1 ici
            printf("Resultat (NON binaire sur num1) : %d\n", ~num1);
            break;
        default:
            printf("Operateur inconnu.\n");
    }

    return 0;
}
