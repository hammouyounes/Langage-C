#include <stdio.h>
#include <stdlib.h>

int main(){
    int *tab,i,t;
    printf("Combien de nombre : ");
    scanf("%d",&i);
    tab = malloc(sizeof(int) * i);
    printf("%p", &tab);
    printf("%p", &tab);
    return 0;
}