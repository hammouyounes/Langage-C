#include <stdio.h>

void triInsertion(int T[], int taille);

int main(){
    int T[] = {20,12,10,19,30};
    int taille = sizeof(T) / sizeof(T[0]);
    triInsertion(T,taille);
    for(int i=0;i<taille;i++){
        printf("%d\n", T[i]);
    }
}

void triInsertion(int T[], int taille){
    for(int i = 1;i<taille;i++){
        int temp = T[i];
        int j = i - 1;
        while(temp<T[j] && j>=0){
            T[j+1] = T[j];
            j--;
        }
        T[j+1] = temp;
    }
}