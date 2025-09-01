#include <stdio.h>

void echanger(int *a, int *b);
void triSelection(int T[], int taille);

int main(){
    int nums[] = {5,7,9,3,2};
    int size = sizeof(nums) / sizeof(nums[0]);
    triSelection(nums, size);
    return 0;
}

void triSelection(int T[], int taille){
    for (int i = 0;i<taille - 1;i++){
        int min_idx = i;
        for(int j = i + 1;j < taille;j++){
            if(T[j]<T[min_idx]){
                min_idx = j;
            }

        }
        echanger(&T[min_idx], &T[i]);
    }

    for(int i=0;i<taille;i++){
        printf("%d\n", T[i]);
    }
}

void echanger(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}