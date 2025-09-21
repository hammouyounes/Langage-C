#include <stdio.h>

int main(){
    int nmbrC;
    float totalPaye;
    char nom[2];
    printf("Entrée le nombre de copiées : ");
    fgets(nom,sizeof(nom), stdin);
    printf("%s", nom);
    
    return 0;
}