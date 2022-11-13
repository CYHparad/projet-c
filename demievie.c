#include <stdio.h>

int main() {
    int noyau;
    int cbannee;
    int anneedemi;
    int itemp = 0;
    printf("Combien de noyaux radiocatif possède votre atome ? ");
    scanf("%d", &noyau);
    printf("Quel est la durée d'une demie vie de votre atome (en annee) ? ");
    scanf("%d", &anneedemi);
    printf("Au bout de combien de temps voulez vous avoir le resultat (en annee) ? ");
    scanf("%d", &cbannee);
    for (int i = 0 ; i < cbannee ;) {     // On fait une boucle for tant que i est inferieur à cbannee
        i++;
        itemp++; // On initialise itemp qui sera notre indicateur de temps avant la prochaine demie vie
        if (itemp == anneedemi){    // Si itemp est égal à la durée d'une demie vie, alors on divise le nombre de noyau par deux et on reinitialise itemp
            noyau = noyau / 2;
            itemp = 0;
        }
        if (noyau == 0){  // Pour éviter que le programme tourne alors que l'atome n'a plus de demie vie, alors on l'arrete
            printf("Au bout de %d ans, votre atome aura %d noyau atomique\n", i, noyau);
            return 0;
        } else {
            printf("Au bout de %d ans, votre atome aura %d noyau atomique\n", i, noyau);
        }

    } 
    return 0;
}