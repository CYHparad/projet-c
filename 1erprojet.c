#include <stdio.h>

void AfficherHelloWorld() {

    printf("Hello world\n");
}

int TableMulti(int x) {
    int i;
    int resultat;
    for (i = 0; i < 10; i++) {
        resultat=x*i;
        printf("%d x %d = %d\n", x, i, resultat);
    }
    return resultat;
}


int main() {
    int valeur;
    AfficherHelloWorld();
    printf("Quel chiffre voulez vous savoir ? ");
    scanf("%d", &valeur);
    TableMulti(valeur);
    return 0;
}