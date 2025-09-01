#include <stdio.h>

void echanger(int *a, int *b);
void triParBulles(int T[], int taille);
int main(){
    int T[] = {20,12,10,19,30};
    int taille = sizeof(T) / sizeof(T[1]);
    printf("Tableau avant le tri :\n");
    for(int i = 0;i<taille;i++){
        printf("%d\n",T[i]);
    }
    triParBulles(T,taille);
    printf("Tableau aprés le tri :\n");
    for(int i = 0;i<taille;i++){
        printf("%d\n",T[i]);
    }

}

void triParBulles(int T[], int taille){
    for(int i = 0;i<taille-1;i++){
        for(int j = 0;j<taille -i - 1;j++){
            if(T[j]>T[j+1]){
                echanger(&T[j],&T[j+1]);
            }
        }
    }
}

void echanger(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}