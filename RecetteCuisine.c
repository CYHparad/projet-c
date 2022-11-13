#include <stdio.h>
#include <string.h>

int MinutesTempsDeCuisson(int temps, int restant) {
    int tempsrestant;
    if (restant > temps) {
        tempsrestant = 0;
    } else {
        tempsrestant = temps - restant;
    }
    printf("Il reste %d minutes\n", tempsrestant);
    return tempsrestant;
}

int preparationTimeInMinutes(int couches) {
    couches = couches * 2;
    printf("Il faudrat %d minutes de préparation pour faire %d étages\n", couches, couches/2);
    return couches;
}

int main() {
    char plat[50];
    int TempsCuisson;
    int reste;
    printf("Quel est le plat que vous voulez faire cuire ? ");
    scanf("%s", plat);
    if (strcmp(plat,"Lasagne") == 0) {
        int etage;
        printf("Combien voulez-vous d'étages ? ");
        scanf("%d", &etage);
        preparationTimeInMinutes(etage);
    }
    printf("Quel est le temps de cuisson de %s ? ", plat);
    scanf("%d", &TempsCuisson);
    printf("Depuis combien de temps %s est entrain de cuire? ", plat);
    scanf("%d", &reste);
    MinutesTempsDeCuisson(TempsCuisson, reste);
    return 0;
}