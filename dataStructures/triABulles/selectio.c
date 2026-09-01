#include <stdio.h>
void echanger(int *a,int *b);
void sortParSelection(int T[], int size);
int main(){
    int nums[] = {9,8,7,6,5,4,3,2};
    int size = sizeof(nums) / sizeof(nums[0]);
    sortParSelection(nums,size);
   
    return 0;
}

void sortParSelection(int T[], int size){
    for(int i=0;i<size-1;i++){
        int minIdx = i;
        for(int j=i+1;j<size;j++){
            if(T[j] < T[minIdx]){
                minIdx = j;
            }
        }
        echanger(&T[i],&T[minIdx]);
    }
    for(int i=0;i<size;i++){
        printf("%d\n", T[i]);
    }
}

void echanger(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}