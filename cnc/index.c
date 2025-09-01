#include <stdio.h>
// #include <stdio.h>

int main(){
    int A = 5;
    int *p1 = &A;
    int **p2 = &p1;
    printf("A = %d\n", A);
    printf("*p1 = %d\n", *p1); // this will give the value of A
    printf("*p2 = %d\n", *p2); //  this will give the adress of A
    printf("**p2 = %d\n", **p2); //  this will give value of A

    return 0;
}