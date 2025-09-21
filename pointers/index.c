#include <stdio.h>
void birthday(int *age);
int main(){
    // int age = 21;
    // int *pAge = &age;
    // // birthday(pAge);
    // printf("%d", *pAge);
    // printf("%d", age);
    int A = 5, *p1 = &A;
    int **p2 = &p1;
    printf("%d", **p2);
}

void birthday(int *age){
    (*age)++;
}