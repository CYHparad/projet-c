#include <stdio.h>

int main(){
    int n;
    int valeur;
    int L[n];
    printf("Quelle est la longueur du tableau ?\n");
    scanf("%d", &n );
    for (int i=0; i<n; i++){
      printf("Quelle est la valeur %d ?\n", i+1);
      scanf("%d", &valeur );
      L[i]=valeur;
    }
    int somme;
    int i;
    somme =0;
    for (i = 0; i < n; i++){
      ///printf("%d\n", L[i]);
      somme = somme + L[i];
    }
    somme = somme/n;
    printf("%d\n", somme);
    return somme;
    ///moyenne(L, n);

}
